#include <stdio.h>
int main(){
    int sayi_bir, sayi_iki, sayi_uc, en_buyuk;
    printf("uc sayi giriniz.");
    scanf(" %d%d%d",&sayi_bir,&sayi_iki,&sayi_uc);
    en_buyuk=sayi_bir;
    if (en_buyuk<sayi_iki){
        en_buyuk=sayi_iki;
    }
    if(en_buyuk<sayi_uc){
        en_buyuk=sayi_uc;
    }
    printf("%d",en_buyuk);
    return 0;
    
}