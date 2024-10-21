#include <stdio.h>
#include <iostream>
int kuv(int x,int y)
{
    int s=1;
    for(int i=0;i<y;i++)
    s=s*x;//1.5=5.5=25.5=125
    return s;
    }
int main()
{
    int x,y;
    printf("Sayı:");
    scanf ("%d", &x);
    printf("Üs:");
    scanf ("%d",&y);
    printf ("%d\n", kuv(x,y));
    return 0;
}