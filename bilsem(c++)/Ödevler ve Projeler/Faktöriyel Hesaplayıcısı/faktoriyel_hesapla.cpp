#include<iostream>
int main()
{
    int x;
    int y=1;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d", &x);
    for(int i=1;i<x+1;i++)
    {
        y= y*i;
    }
    printf("%d!=%d\n", x , y);
}
//14 ve üzeri sayılarda hata yapıyor, sebebi nedir?