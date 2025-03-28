/*
Write a C program that read a book 
title (max 100c) and convert all 
letters into lowercase.
*/
#include <stdio.h>
#include <ctype.h>
int main(){
	char title[101]	; int i;
	printf("Enter the title of a book:");
	fgets(title, 102, stdin);
	printf("title is %s\n",title);

	title[0]= toupper(title[0]);
	
	for(i=1; title[i]!='\0' ; i++)
		title[i]=tolower(title[i]);
	
	for(i=1; title[i]!='\0' ; i++){
		if(isspace(title[i])!=0)
			title[i+1] = toupper(title[i+1]);
	}
	
	printf("title is %s\n",title);
	return 0;
}




