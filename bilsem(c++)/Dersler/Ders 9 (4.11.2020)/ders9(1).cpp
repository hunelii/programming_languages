#include <iostream>
#include <stdlib.h> //rand fonksiyonu için
#include <time.h> //srand fonksiyonu için
// array
// mod ? tek TEK Tek 
int a[10];
int main() {
int t=0;
int tahmin;


printf("Sizce rastgele belirlenen 10 sayının toplamı tek midir çift midir? \n Tek ise 1 çift ise 2 giriniz...");
scanf("%d",&tahmin );
printf("%d", tahmin);
if(tahmin==1 or tahmin==2)
{
srand(time(0));
  for (int i=0;i<10; i++)
  {
  int x=rand()%100+1;
  t=t+x;
  printf("%d \n",x );}

if(tahmin==1 && t%2==1) printf("Bildiniz TEK\n");
else if(tahmin==2 && t%2==0) printf("Bildiniz ÇİFT\n");
else  printf("Bilemedin\n");

   printf("Toplam=%d \n ",t );}

   else printf("Lüften doğru giriş yapın...");
   }