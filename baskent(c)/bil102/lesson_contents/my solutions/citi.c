/*
Write a C program that reads 8 city names and find
how many of them have the same character at the 
beginning and at te end.

Van
Izmir
Adana
ANKARA
...
------
There are 4 cities like that.
*/
#include <stdio.h>
#include <string.h>
int main(){
    char sehir[11];
    int i,sayac;
    for(i=0;i<8;i++){
        printf("sehir gir: ");
        scanf("%s",sehir);
        int len=strlen(sehir);
        //printf("%d\n",len);
        if(sehir[0]==sehir[len-1]) {
            //printf("%s sehrinin ilk ve son harfi aynıdır.\n", sehir);
            sayac++;
        }
    }
    printf("There are %d cities like that",sayac);
}