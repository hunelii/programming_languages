#include <iostream>
int a[10]={9, 80, 90,888, 5, 54, 44, 34, 65, 67};
//Array
// bilgisayar saymaya 0 dan başlar....
// a[1] o sebeple 80
//a[0] elemanı 9
// a[9] olan eleman ise 67
int main() 
{
    // for döngüsü döngü sayısı belliyse kullanılır
    for(int i=0;i<10;i++) 
    {
        if(a[i]<45)  
        {
            printf("%d %d\n", i+1,a[i]);
        }
    }    
// Ödev: Dizi içindeki kaç tane sayı 50'den büyük
}