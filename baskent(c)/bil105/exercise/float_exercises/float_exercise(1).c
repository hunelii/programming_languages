#include <stdio.h>
int main(){
    int int_sayi;
    float float0_sayi,float1_sayi,float2_sayi,x,y,z;
    printf("bir adet integar giriniz:\n");
    scanf("%d", &int_sayi);
    printf("noktadan sonrası 0 olan bir float giriniz:\n");
    scanf("%f", &float0_sayi);
    printf("noktadan sonra 1 basamaklı float giriniz:\n");
    scanf("%f", &float1_sayi);
    printf("noktadan sonra 2 basamaklı float giriniz:\n");
    scanf("%f", &float2_sayi);
    
    x=int_sayi+float0_sayi;
    y=int_sayi+float1_sayi;
    z=int_sayi+float2_sayi;
    
    printf("%.0f,%.1f,%.2f",x,y,z);
    return 0;
}
