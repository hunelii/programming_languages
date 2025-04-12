#include <stdio.h>
#include <string.h>
typedef struct {
    char ad[21];
    char soyad[21];
    float ort;
}ogrenci;
int main()
{
    int i,j,k;
    char yedek[101];
    ogrenci ogrenciler[10];
    for(i=0 ; i<10 ; i++){
        printf("%d. adi, soyadi, ortalamasini giriniz: ",i+1);
        scanf("%s%s%f",ogrenciler[i].ad,ogrenciler[i].soyad,&ogrenciler[i].ort);
        printf("\n");
    }
    for(j=0 ; j<10 ; j++){
        for(k=0 ; k<10 ; k++){
            if(ogrenciler[k].soyad[0]>ogrenciler[k+1].soyad[0]){
                strcpy(yedek,ogrenciler[k].soyad);
                strcpy(ogrenciler[k].soyad,ogrenciler[k+1].soyad);
                strcpy(ogrenciler[k+1].soyad,yedek);
            }
        }
    }
        for(i=0 ; i<10 ; i++){
        printf("%s %s %f\n",ogrenciler[i].ad,ogrenciler[i].soyad,ogrenciler[i].ort);
    }
    return 0;
}
