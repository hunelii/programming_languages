#include <stdio.h>
int i=33, d;
int main()
{
    int x;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d", &d);
    
    if(d==i)
    {printf("Bildiniz");}
    else
    {printf("Bilemediniz");}
    return 0;
}