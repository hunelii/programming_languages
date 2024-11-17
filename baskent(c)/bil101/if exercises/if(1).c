/* Klavyeden girilen dört basamaklı sayının "yarımkare" olup olmadığını kontrol eden program. "Yarımkare" olma durumu, sayının son iki ve ilk iki basamağının ayrı ayrı bir sayı olarak alınıp toplanması ve bu toplamın karesinin orijinal sayıya eşit olmasıyla belirlenir. Eğer bu koşul sağlanıyorsa, sayı yarımkare olarak kabul edilir ve ekranda belirtilir. */
#include <stdio.h>

int main()
{
    int sayi, birler, binler, onlar, yuzler;
    int x, y, z;

    printf("Dort basamakli sayiyi giriniz:");
    scanf("%d", &sayi);

    birler = sayi % 10;
    onlar = ((sayi - birler) / 10) % 10;
    yuzler = (sayi / 100) % 10;
    binler = sayi / 1000;

    x = onlar * 10 + birler;
    y = binler * 10 + yuzler;

    z = x + y;
    printf("z=%d",z);
    printf("sayi=%d",sayi);
    if (z * z == sayi)
        printf("Girilen sayi Yarımkare bir sayidir");
    if (z * z != sayi)
        printf("Girilen sayi Yarımkare bir sayi degildir");

    return 0;
}
