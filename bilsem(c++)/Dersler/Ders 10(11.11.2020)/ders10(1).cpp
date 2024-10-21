#include <iostream>
int yas;
int kisi;
int main() {6
printf("Yaşınız kaç?");
scanf("%d", &yas);

if(yas>=8) printf("Denize girebilirsiniz");
else 
{
printf("Yanında biri var mı? E=1/H=0");
scanf("%d", &kisi);
if(kisi==1)
   {
      printf("\nYanındaki kişi kaç yaşında?");
      scanf("%d", &yas);
      if(yas>=10) printf("\nYanındaki kişi ile denize girebilirsin.");
      else
      printf("\nYanındaki kişi 10 yaşından büyük olmalı,  denize giremezsin");

   }
  else
  printf("\n8 yaşından küçük olduğun için tek başına denize giremezsin...");
     

}

}