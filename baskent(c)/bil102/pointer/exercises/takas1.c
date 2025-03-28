#include <stdio.h>
void takas(int *aptr, int *bptr);
int main()
{
    int a,b,*aptr,*bptr;
    aptr=&a;
    bptr=&b;
    printf("takas edilecek iki sayı giriniz: ");
    scanf("%d%d", &a,&b);
    printf("a'nın ilk değeri: %d, b'nin ilk değeri: %d\n", a,b);
    takas(aptr,bptr);
    printf("a'nın son değeri: %d, b'nin son değeri: %d\n", a,b);
    return 0;
}
void takas(int *aptr, int *bptr){
    *aptr=*aptr+*bptr;
    *bptr=*aptr-*bptr;
    *aptr=*aptr-*bptr;
}
