/* Halley yıldızının görülebileceği yılları hesaplayan ve listeleyen program. Program, Halley yıldızının 1986'dan başlayarak 75 yılda bir tekrar görüldüğünü varsayar. 3000 yılına kadar görülebilecek yılları hesaplar ve ekrana yazdırır. Ayrıca, 2000'li yıllar içinde yıldızın kaç kez görülebileceğini de sayarak kullanıcıya bildirir. */
#include <stdio.h>
int main(){
    int tarih=1986,sayac;
    printf("Halley yildizinin görülebileceği yillar: ");
    while (tarih<3000){
        printf("%d, ", tarih);
        tarih=tarih+75;
        sayac++;
}
    printf("\nHalley yıldızı 2000'li yıllarda %d kez görülebilir.",sayac-1);
    return 0;
}
