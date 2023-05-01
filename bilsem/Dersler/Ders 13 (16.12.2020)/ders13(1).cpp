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
    printf ("%d\n", kuv(5,5));
    return 0;
}