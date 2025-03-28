#include <stdio.h>
int main(){
    int sayi,sayiptr=&sayi,kirp,kirpptr=&kirp;
    char yon;
    printf("bes basamakli sayiyi giriniz: ");
    scanf("%d", &sayi);
    printf("Kirpilacak sayi miktarini giriniz: ");
    scanf("%d", &kirp);
    printf("Sağdan(\"a\" giriniz) mı Soldan(\"o\" giriniz) mı kırpılsın");
    scanf("%c", &yon);
    kirp(int *sayiptr,int *kirpptr){
        switch(yon){
            case 'a':
                for(i=0 ; i<*kirpptr-1 ; i++){
                    *sayiptr=*sayiptr/10;
                }
            case 'o':
                for(i=10000 ; i/10<(*kirpptr-1)*10000 ; i/10){
                    *sayiptr=*sayiptr/i;
                }
        }
    }
} 