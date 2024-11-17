/* Klavyeden girilen sayıya kadar (dahil) olan değerler için (i+1)/i işlemini gerçekleştirerek bu değerleri toplayan ve toplam sonucu ekrana yazdıran program. */
#include <stdio.h>
int main(){
    int sayi;
    float toplam=0;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);
    for(int i=1;i<=sayi;i++){
        toplam+=(float)(i+1)/i;
        //printf("i=%.2f,toplam=%.2f",i,toplam);
    }
    printf("TOPLAM %f",toplam);
    return 0;
}