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

int main(){
    char city[8][21]; int i=0; // 20
    int count, lastIndex, x=0;
    printf("Enter 8 cities names:\n");
    for(i=0; i<8; i++){
       printf("Enter the %d. city name:", i+1);
       scanf("%s", city[i]);
     }
     // 
     for(i=0; i<8 ; i++){     
        x=0;     
        while(city[i][x] != '\0') x++; // izmir 5 
        lastIndex= x-1;
        if(city[i][0] == city[i][lastIndex]){
                   count++;              
        }                                      
     }
     printf("-----------------------\n");
     printf("There are %d cities like that.\n", count);
    return 0;
    
}
