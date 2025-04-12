#include <stdio.h>
void cevir(int *yilptr, int *ayptr, int *gunptr);
int main()
{
    int yil, ay, gun;
    int *yilptr=&yil, *ayptr=&ay, *gunptr=&gun;
    printf("Gun sayisi giriniz: ");
    scanf("%d", &gun);
    cevir(yilptr, ayptr, gunptr);
    printf("Bu sure %d yıl, %d ay, %d gundur.", yil, ay, gun);
    return 0;
}
void cevir(int *yilptr, int *ayptr, int *gunptr){
    *yilptr=*gunptr/360;
    *ayptr=(*gunptr-(*yilptr*360))/30;
    *gunptr=*gunptr-(*yilptr*360)-(*ayptr*30);
}