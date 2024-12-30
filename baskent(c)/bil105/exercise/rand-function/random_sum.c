/******************************************************************************

ilkokul öğrencileri için iki basamaklı rastgele sayılar üretilen bir program. 
öncelikle girdi olarak s,S veya e,E alan program eğer e girilirse eldeli toplama
s girilirse eldesiz toplama yapmaktadır. rastgele sayı fonksiyonu yazılmalıdır.

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
int rastgeleSayi(char girdi, int sayi);
int main()
{
    int sayi;
    char girdi;
    /*srand(time(NULL));
    printf("lütfen sayi ve eldeli toplama için e/E aksi için s/S giriniz:");
    scanf("%d",&sayi);
    scanf("%c",&girdi);*/
    rastgeleSayi('s',2);
    return 0;
}
int rastgeleSayi(char girdi, int sayi){
    int sayac=0,sayi1,sayi2;
    switch (girdi){
        case 'e':
        case 'E':
            while (sayac<sayi){
                sayi1=10+rand()%90;
                sayi2=10+rand()%90;
                if (((sayi1%10+sayi2%10)/10) == 1){
                    printf("%d + %d = ?\n", sayi1,sayi2);
                    sayac++;
                }
            }
            break;
        case 's':
        case 'S':
            while (sayac<sayi){
                sayi1=10+rand()%90;
                sayi2=10+rand()%90;
                if (((sayi1%10+sayi2%10)/10)!=1){
                    printf("%d + %d = ?\n", sayi1,sayi2);
                    sayac++;
                }
            }
            break;
    }
    return 0;
}


