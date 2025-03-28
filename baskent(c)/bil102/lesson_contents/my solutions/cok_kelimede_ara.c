/*
ekranda girilen 10 il arasinda, 
benim guzel memleketim varmi? yi bulan program�
*/
#include <stdio.h>
#include <string.h>
int main(){
    char sehir[11],memleket[11];
    int i, sayac=0;
    printf("memleketini gir: ");
    scanf("%s",memleket);
    for(i=0;i<10;i++){
        printf("sehir gir: ");
        scanf("%s",sehir);
        if(strcmp(sehir,memleket)==0){
            sayac++;
        }
    }
    if(sayac==1){
        printf("memleket var");
    }
    else{
        printf("memleket yok");
    }
}