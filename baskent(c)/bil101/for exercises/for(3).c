/*klavyeden girilen on değer arasından en büyük iki tanesini bulur.*/
#include <stdio.h>
int main(){
    int sayi1=0,sayi2=0,eb1=0,eb2=0;
    for(int i=1;i<11;i++){
        sayi1=sayi2;
        printf("%d. sayi=",i);
        scanf("%d",&sayi2);
        if(sayi2>sayi1 && sayi2>eb1){
            eb2=eb1;
            eb1=sayi2;
            
        }
        else if(sayi2>sayi1 && sayi2<eb1){
            eb2=sayi2;
        }
        //printf("sayi1=%d,sayi2=%d",sayi1,sayi2);
        //printf("eb1=%d,eb2=%d",eb1,eb2);
    }
    printf("en buyuk deger=%d\nikinci en buyuk deger=%d",eb1,eb2);
}