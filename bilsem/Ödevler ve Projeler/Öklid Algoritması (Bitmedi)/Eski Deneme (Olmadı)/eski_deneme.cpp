#include <stdio.h>
#include <iostream>
int x,y,k,c,b;
int main()
{
    printf("Birinci sayıyı giriniz:");
    scanf("%d",&x);
    printf("İkinci sayıyı giriniz:");
    scanf("%d",&y);
    if (x==y)
        printf("%d", x);
    else if (x>y)//ikincil if olarak y>x olucak
        for(int a;a>0;)//hata:for döngüsü hepsini almış
    {
        if ((x%y)!=0&&(x%y)!=a)
        {k=x%y;
        x=y;
        y=k;
        a=k;
            printf("ebob(%d,%d)\n", k,x);
            //cevap=ebob genelliği bozmadan(x,k)
        }
        
            else a=0;//burada ise sayılar birbirinin katı ise direkt olarak ebobu söylüyor
        printf("%d\n", y);
    

    }

}