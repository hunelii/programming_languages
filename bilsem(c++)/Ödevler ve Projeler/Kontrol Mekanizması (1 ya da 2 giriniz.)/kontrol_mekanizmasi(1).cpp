#include <stdio.h>
#include <iostream>
using namespace std;
int x;
int y=1;
int main()
{
    cout<<"Lütfen bir sayı giriniz:";
    cin>>x;
    for(int i=1;i<=y;i++)
    if (x!=1 && x!=2) {
      cout << "Lütfen başka bir sayı giriniz:";
        cin>>x;
        y++;
        printf("i=%d,y=%d\n", i, y);
    } else {
        printf("helal");
        printf("i=%d,y=%d\n", i, y);
    }
}