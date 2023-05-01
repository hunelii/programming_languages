#include<iostream>
int main()
{
    int n;
    int r;
    int x=1;
    int y=1;
    int z=1;
    printf("Kombinasyon n tane sayının r tanesinin seçilmesidir.\n");
    printf("Lütfen eleman sayısını giriniz: ");
    scanf("%d", &n);
    printf("Lütfen kaç eleman seçmek istedğinizi giriniz: ");
    scanf ("%d", &r);
    for (int i=1;i<n+1;i++)
    {
        x= x*i;
    }
    for (int i=1;i<r+1;i++)
    {
        y= y*i;
    }
    for (int i=1;i<n-r+1;i++)
    {
    z= z*i;
    }
//x=n'nin faktöriyeli.
//y==r'nin faktöriyeli
//z=n-r'nin faktöriyeli
    printf("%d elemanın %d tanesinin seçimi: %d\n",n,r,x/(y*z));
}