//code that shows                                                            
#include <stdio.h>
int main() {
    int a[10];
    a[0]=30;
    int *p;
    p=a;
    *p=5;
    (*p)++;
    printf("%d",a[0]);
    
    
    
    return 0;

}


