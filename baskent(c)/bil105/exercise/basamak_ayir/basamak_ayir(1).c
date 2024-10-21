#include <stdio.h>

int main(){
    int sayi,birler,onlar,yuzler,binler,on_binler;
    printf("bes basamakli bir sayi giriniz:");
    scanf(" %d", &sayi );
    
    birler=sayi%10;
    onlar=(sayi-birler)%100/10;
    yuzler=(sayi-birler-onlar)%1000/100;
    binler=(sayi-birler-onlar-yuzler)%10000/1000;
    on_binler=(sayi-birler-onlar-yuzler-binler)/10000;
    printf("%d\n",sayi);
    printf("%d-%d-%d-%d-%d\n", on_binler,binler,yuzler,onlar,birler);
    return 0;
}