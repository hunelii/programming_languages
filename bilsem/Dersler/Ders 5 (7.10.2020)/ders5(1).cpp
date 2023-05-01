#include <stdio.h>

int main()
{
    int i;
    int d;
    int e;
    printf("Sırası ile üç tane sayı girmenizi istiyoruz.\n");
    printf("İlk sayı lütfen");
    scanf("%d", &i);
    printf("İkinci sayıyı lütfen");
    scanf("%d", &d);
    printf("Son sayıyı lütfen");
    scanf("%d", &e);
    
    if(i<d && e<d)
		{
        printf("%d", d);
    }
    if(e<i && d<i){
        printf("%d", i);
    }
    if(d<e && i<e){
        printf("%d", e);
    }
    if(d==e || d==i || e==i){
        printf("Eşitlik Söz Konusu");
    }
    return 0;
}