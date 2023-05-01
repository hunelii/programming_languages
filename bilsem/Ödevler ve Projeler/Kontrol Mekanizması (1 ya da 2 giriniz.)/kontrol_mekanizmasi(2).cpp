#include <iostream>
using namespace std;
int x,y=1;
int main()
{
    cout<<"Lütfen bir sayı giriniz:";
    cin>>x;
    for(int i=1;i<=y;i++)
    if (x!=1 && x!=2) {
      cout << "Lütfen başka bir sayı giriniz:";
        cin>>x;
        y++;
    } else {
        printf("Helal\n");
    }
}