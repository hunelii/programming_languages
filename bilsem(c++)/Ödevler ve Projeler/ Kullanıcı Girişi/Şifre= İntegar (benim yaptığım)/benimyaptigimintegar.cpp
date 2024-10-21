#include <stdio.h>
char ad[15];
char ad1[15]="metin";
int sifre;
int sifre1=1234;
int main()
{
    printf("Kullanıcı adı:");
    scanf("%s", ad);
    printf("Şifre:");
    scanf("%d", sifre);
    
    if (*ad==*ad1 && sifre==sifre1)
    printf("Giriş başarılı.");
    else
    printf("Girdiğiniz kullanıcı adı yanlıştır.");
    
    return 0;
}