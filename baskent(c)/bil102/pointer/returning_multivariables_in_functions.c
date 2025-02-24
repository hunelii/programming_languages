#include <stdio.h>

void generateTime(int total_seconds,int *hour,int *minute, int *second);

int main(){
    int hour, minute, second, total_seconds;
    printf("Enter the total_seconds:");
    scanf("%d", &total_seconds);
    generateTime(total_seconds, &hour, &minute, &second);
    printf("The time is : %d:%d:%d\n",hour, minute, second);
    return 0;
}

void generateTime(int total_seconds,int *hour,int *minute, int *second){
    *hour = total_seconds/3600;
    *minute = total_seconds%3600/60;
    *second = total_seconds%60;
}