#include <iostream>
int a[100]={9, 80, 90,888, 5, 54, 44, 34, 65, 67};
//Array
int eb;
// bilgisayar saymaya 0 dan başlar....
// a[1] o sebeple 80
//a[0] elemanı 9
// a[9] olan eleman ise 67
int main()
{
    // for döngüsü döngü sayısı belliyse kullanılır
    eb=0;
    for(int i=9;i>=0;i--)
    {
        if(a[i]>eb) eb=a[i];
    } 
    printf("%d", eb);

}