/* Kullanıcıdan ölçüm sayısını alarak belirtilen sayıda ölçüm değerlerini toplayan program. İlk döngüde her ölçüm seti için bir ara toplam hesaplanır ve bu değer ekrana yazdırılır. Ölçüm sayısı 0 girildiğinde program sonlanır. Program, tüm ölçüm setlerinin toplamını bir genel toplam olarak kaydeder ve en sonunda bu genel toplam ekrana yazdırılır. */
#include <stdio.h>
int main(){
    int i=1;
    float ara_toplam=0,genel_toplam=0;
    float olcum;
    int o_sayisi=1; //olcum sayısı
    while(o_sayisi!=0){
        o_sayisi=1;
        printf("Olcum sayisi:");
        scanf("%d", &o_sayisi);
        while(i<=o_sayisi){
            printf("Olcum giriniz:");
            scanf("%f", &olcum);
            ara_toplam+=olcum;
            i++;
        }
        if(o_sayisi!=0){
            printf("    Ara toplam:%.2f\n",ara_toplam);
        }
        i=1;
        genel_toplam+=ara_toplam;
        ara_toplam=0;
    }
    printf("Genel toplam:%.2f\n",genel_toplam);
    
}