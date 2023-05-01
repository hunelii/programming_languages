#include <stdio.h>
int a;
int b;
int c;

int main()
{
    printf("Lütfen ilk sayıyı giriniz.");
    scanf("%d", &a);
    printf("Lütfen ikinci sayıyı giriniz.");
    scanf("%d", &b);
    printf("Lütfen son sayıyı giriniz.");
    scanf("%d", &c);
    
    if (a>b && a>c && b>c)
    {
        printf("%d>%d>%d", a, b, c,"a>b>c");
    }
    else if (a>b && a>c && c>b)
    {
        printf("%d>%d>%d", a, c, b,"a>c>b");
    }
    else if (b>a && b>c && a>c)
    {
        printf("%d>%d>%d", b, a, c,"b>a>c");
    }
    else if (b>a && b>c && c>a)
    {
        printf("%d>%d>%d",b,c,a, "b>c>a");
    }
        else if (c>a && c>b && b>a)
    {
        printf("%d>%d>%d",c,b,a, "c>b>a");
    }
    else
    {
        printf("%d>%d>%d",c,a,b, "c>a>b");
    }
    return 0;
}