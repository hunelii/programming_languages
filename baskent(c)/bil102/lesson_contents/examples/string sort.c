/*
Write a C program which sorts 6 words (max 10 k) in ascending orders (A-Z).

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int  main(){

	char words[6][11];
	char yedek[11];
	int i,j,k;
	
	// user input
	printf("Please enter 6 words:\n");
	for(i=0; i<6; i++){
		printf("%d word:", i+1);
		scanf("%s", words[i]);
	}
	// SORT , BUBLE
	for(i=0; i<6;i++){
		for(j=0; j<5; j++){
			
			for(k=0; words[j][k]!='\0' ; k++)
					words[j][k] = tolower(words[j][k]);
					
			for(k=0; words[j+1][k]!='\0'; k++)
					words[j+1][k]= tolower(words[j+1][k]);
			
			
			if(strcmp(words[j], words[j+1])==1){
				strcpy(yedek, words[j]);
				strcpy(words[j], words[j+1]);
				strcpy(words[j+1], yedek);
			}
		}
	}
	printf("-----------------------\n");
	printf("Words are sorted in ascending order as following:\n");
	// list them to screen
	for(i=0; i<6; i++){
		printf("%d. word : %s\n", i+1, words[i]);
	}
	



}
