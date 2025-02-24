#include <stdio.h>
int main(){
    int dizi[10];
    for (int i=0;i<10;i++){
        dizi[i]= rand();
        //dizi[i]=9-i;
        printf("%d ",dizi[i]);
    }
    printf("\n");
    for (int i=0;i<10;i++){
        for(int j=0;j<9;j++){
            if(dizi[j]>dizi[j+1]){
                dizi[j]+=dizi[j+1];
                dizi[j+1]=dizi[j]-dizi[j+1];
                dizi[j]=dizi[j]-dizi[j+1];
            }
        }
    }
    for (int i=0;i<10;i++){
        printf("%d ",dizi[i]);
    }
}
