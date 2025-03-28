#include <stdio.h>
void sirala(int *a,int *b,int *c);
int main(){
    int a=3, b=4, c=5;
    int *aptr=&a,*bptr=&b,*cptr=&c;
    sirala(aptr,bptr,cptr);
    printf("Sirali :\n%d, %d, %d",a,b,c);
    return 0;
}
void sirala(int *aptr,int *bptr,int *cptr){
    int i,j;
    for (i=0 ; i<4 ; i++){
        for (j=0 ; j<3 ; j++){
            if(*bptr>*aptr){
                *aptr=*aptr+*bptr;
                *bptr=*aptr-*bptr;
                *aptr=*aptr-*bptr;
            }
            if(*cptr>*bptr){
                *cptr=*cptr+*bptr;
                *bptr=*cptr-*bptr;
                *cptr=*cptr-*bptr;
            }
            if(*cptr>*aptr){
                *aptr=*aptr+*cptr;
                *cptr=*aptr-*cptr;
                *aptr=*aptr-*cptr;
            }   
        }
    }

    
}
