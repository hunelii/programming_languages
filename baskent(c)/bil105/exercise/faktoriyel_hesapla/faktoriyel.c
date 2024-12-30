/*istenilen sayının faktoriyelini recursive fonksiyon sayesinde hesaplayan program*/
#include <stdio.h>
int faktoriyel(int sayi){
    int faktoriyel_sayi;
    if (sayi-1!=0){
        faktoriyel_sayi=sayi*faktoriyel(sayi-1);
    }
    else{
        faktoriyel_sayi=1;
    }
    return faktoriyel_sayi;
}
int main() {
    int sayi;
  printf("faktoriyelini almak istediğiniz sayiyi giriniz: ");
  scanf("%d",&sayi);
  printf("%d! = %d\n",sayi,faktoriyel(sayi));
  return 0;
}