/*
Write a C program that read a book 
title (max 100c) and convert all 
letters into lowercase.
*/
#include <stdio.h>
#include <ctype.h>
int main(){
	char title[101]	;
	printf("Enter the title of a book:");
	fgets(title, 102, stdin);
	printf("title is %s\n",title);
	
	printf("the first letter is %c\n", title[0]);
	printf("the first letter is %c\n", tolower(title[0]));
	
	title[0]=tolower(title[0]);
	
	printf("the first letter is %c\n", title[0]);
	int i;
	for(i=0; title[i]!='\n' && title[i]!='\0'; i++){
		title[i]=tolower(title[i]);
	}
	
	printf("Title is %s\n", title);
	
	
	return 0;
	
	
}




