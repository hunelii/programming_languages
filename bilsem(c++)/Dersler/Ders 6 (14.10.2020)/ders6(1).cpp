#include <stdio.h>

char isim1[10];
char isim2[10]="metin";

int main()
{
scanf("%s" , isim1);
    if (*isim1==*isim2)
    printf("Merhaba %s", isim1);
    else 
    printf("Hatalı giriş.");

    return 0;
}