/*
Write a C program that read a book 
title (max 100c) and convert all 
letters into lowercase.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char title[101],title2[101];
    int i;
    printf("baslığı giriniz");
    fgets(title,102,stdin);
    //scanf("%s", title2);
    printf("\n");
    for(i=0 ; i<100 ; i++){
        title[i]=tolower(title[i]);
    }
    printf("%s\n",title);
    //printf("%s",title2);
    return 0;
}
