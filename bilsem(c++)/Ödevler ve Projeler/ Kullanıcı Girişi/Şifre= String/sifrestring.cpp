#include <stdio.h>
char ad[15];
char ad1[15]="metin";
char sifre[15];
char sifre1[15]="bilsem";
int main()
{
    printf("Kullanıcı adı:");
    scanf("%s", ad);
    printf("Şifre:");
    scanf("%s", sifre);
    
    if (*ad==*ad1 && *sifre==*sifre1)
    printf("Giriş başarılı.");
    else
    printf("Giriş başarısız, lütfen tekrar deneyiniz.");
    
    return 0;
}