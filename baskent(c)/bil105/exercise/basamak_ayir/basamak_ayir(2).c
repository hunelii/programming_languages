
#include <stdio.h>
int main(){
    int sayi,ayirilacak_sayi,birler,onlar,yuzler,binler,on_binler;
    printf("Lutfen bes basamakli bir sayi giriniz:");
    scanf("%d",&sayi);
    ayirilacak_sayi=sayi;
    birler=ayirilacak_sayi%10;
    ayirilacak_sayi=ayirilacak_sayi-birler;
    onlar=ayirilacak_sayi%100/10;
    ayirilacak_sayi=ayirilacak_sayi-onlar*10;
    yuzler=ayirilacak_sayi%1000/100;
    ayirilacak_sayi=ayirilacak_sayi-yuzler*100;
    binler=ayirilacak_sayi%10000/1000;
    ayirilacak_sayi=ayirilacak_sayi-binler*1000;
    on_binler=ayirilacak_sayi/10000;
    printf("%d\n",sayi);
    printf("%d-%d-%d-%d-%d\n",on_binler,binler,yuzler,onlar,birler);
    return 0;
}
