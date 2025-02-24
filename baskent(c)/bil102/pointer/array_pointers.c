#include <stdio.h>
#define N 10
int main() {
    int arr[N],i;
    for(i=0;i<N;i++) {
    printf("array giriniz:");
    scanf("%d",&arr[i]);
    }    
    int *p;
    p=arr;
    for(i=0;i<N;i++) {
        printf("%d.numbers = %d\n",i,*p);
        p++;
    }
    
}
