/* Kullanıcıdan ürün kodlarını alarak bu kodlara karşılık gelen fiyatları toplayan program. Kullanıcı "111" kodunu girene kadar döngü devam eder. Ürün kodları 11, 12, 13, 14 ve 15 için sırasıyla 1.5 TL, 2.5 TL, 3.0 TL, 4.5 TL ve 5.0 TL fiyatları eklenir. Program, geçerli ürün kodları dışında bir giriş yapılırsa işlem yapmaz ve geçerli kod bekler. Döngü sonunda gün sonu toplam satış kazancını ekrana yazdırır. */
#include <stdio.h>
int main()
{   
    int kod;
    float fiyat;
    do{
        printf("Kalemlerin urun kodlarını girin (Durdurmak için 111):");
        scanf("%d", &kod);
        if (kod==11){
            fiyat=fiyat+1.5;
        }
        else if (kod==12){
            fiyat=fiyat+2.5;
        }
        else if (kod==13){
            fiyat=fiyat+3.0;
        }
        else if (kod==14){
            fiyat=fiyat+4.5;
        }
        else if (kod==15){
            fiyat=fiyat+5.0;
        }
    }
    while (kod>10&&kod<16);
    printf("Gun sonu satıs kazancı: %.2f TL'dir.",fiyat);
    return 0;
}
