#include <stdio.h>using namespace std;
#include <iostream>void sayma(int x, int y)
{
    for(int i=y;i<=x;i++)
    cout<<i<<" ";
}
int main()
 {
int a,b;
cout<<"kaçtan başlayayım?";
cin>>b;
cout<<"kaça kadar sayayım?";
cin>>a;sayma(a, b);
