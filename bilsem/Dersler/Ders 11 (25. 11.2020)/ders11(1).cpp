#include <stdio.h>
int x;
int y;
int main()
{
    printf("Yaşınızı giriniz:");
    scanf("%d", &x);
    printf("Saat kaç:");
    scanf("%d", &y);
    if (x<65 && x>20)
        printf("Çıkabilirsiniz.\n");
    else if (x<21 && y>12 && y<17)
        printf("20 yaş altı kişilerin çıkış saatleri 13.00-16.00'dır.\n Çıkabilirsiniz.\n");
    else if (x>64 && y<9 && y<14)
        printf("65 yaş üstü kişilerin çıkış saatleri 10.00-13.00'dır.\n Çıkabilirsiniz.\n");
    else
        printf("20 yaş altı kişilerin çıkış saatleri 13.00-16.00'dır.\n65 yaş üstü kişilerin çıkış saatleri 10.00-13.00'dır.\n Çıkamazsınız.\n");
    
}