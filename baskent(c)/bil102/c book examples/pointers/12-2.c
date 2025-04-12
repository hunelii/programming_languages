#include <stdio.h>
void ayristir(int *sayiptr, int *binlerptr, int *yuzlerptr, int *onlarptr, int *birlerptr);
int main(){
    int sayi, birler, onlar, yuzler, binler;
    printf("4 basamaklı bir sayı giriniz: ");
    scanf("%d",&sayi);
    int *sayiptr=&sayi, *binlerptr=&binler, *yuzlerptr=&yuzler, *onlarptr=&onlar, *birlerptr=&birler;
    ayristir(sayiptr,binlerptr,yuzlerptr,onlarptr,birlerptr);
    printf("%d sayisinin binler basamagı: %d\n",sayi,binler);
    printf("%d sayisinin yuzler basamagı: %d\n",sayi,yuzler);
    printf("%d sayisinin onlar basamagı:  %d\n",sayi,onlar);
    printf("%d sayisinin birler basamagı: %d\n",sayi,birler);
    return 0;
}
void ayristir(int *sayiptr, int *binlerptr, int *yuzlerptr, int *onlarptr, int *birlerptr){
    *binlerptr=*sayiptr/1000;
    *yuzlerptr=(*sayiptr-*binlerptr*1000)/100;
    *onlarptr=(*sayiptr-*binlerptr*1000-*yuzlerptr*100)/10;
    *birlerptr=(*sayiptr-*binlerptr*1000-*yuzlerptr*100-*onlarptr*10);
}