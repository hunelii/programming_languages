#include<iostream>
int a[10]={5,6,7,9,4,78,89,65,4,78}, b[10];
int cift=0;
int tek=0;
int main()
{
    for(int i=0;i<10;i++)
    {
    if (a[i]%2==0) cift=cift+a[i];
        
    else
        tek=tek+a[i];
    }
    printf("Çift sayıların toplamı: %d\n", cift);
    printf("Tek sayıların toplamı: %d\n",tek);
}