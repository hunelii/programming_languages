#include <iostream>
int main()
{
    int x,y,a,b;
    printf("Birinci sayıyı giriniz:\n");
    scanf("%d",&x);
    printf("İkinci sayıyı giriniz:\n");
    scanf("%d",&y);
    while (true){
    printf("x=%d, y=%d\n",x,y);
        printf("gcd(%d,%d)\n",x,y);
        a=y;
        b= x % y;
        x=a;
        y=b;
        printf("x=%d, y=%d\n",x,y);
        if (y==0)
            break;
    }
    printf("gcd(%d,%d)=%d\n",x,y,x);
    
        
}
