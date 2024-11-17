/* Klavyeden girilen başlangıç ve bitiş değerleri arasında bulunan çift sayıları bulan ve ekrana yazdıran program. Aynı zamanda bu çift sayıların sayısını da ekranda gösterir. */
#include <stdio.h>
int main()
{
int bas_sayi, son_sayi;
int sayac=0;
printf("başlangıç ve bitiş değerlerini giriniz:");
scanf("%d%d",&bas_sayi,&son_sayi);
for(int i=bas_sayi;i<=son_sayi;i++){
    if(i%2==0){
        printf("%d ",i);
        sayac++;
    }
}
printf("(Toplam: %d)",sayac);

    return 0;
}