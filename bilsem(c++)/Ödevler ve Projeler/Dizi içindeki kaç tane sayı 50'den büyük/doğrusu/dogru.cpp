#include <iostream>
int a[100]={9, 80, 90,888, 5, 54, 44, 34, 65, 67};
int b=0;

int main()
{
    for(int i=0;i<10;i++) 
      if(a[i]>50) b++;
    printf("%d tane 50 den büyük sayı var ", b);

}