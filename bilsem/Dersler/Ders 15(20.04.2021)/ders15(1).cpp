#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int a,b,c,d,e,f,top,ort;
int* x[6]={&a,&b,&c,&d,&e,&f};
int main()
{
    cout<<"Lütfen altı sayı giriniz:";
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    cin>>e;
    cin>>f;
    top=a+b+c+d+e+f;
    ort=top/6;
    printf("Girdiğiniz 6 sayının ortalaması:%d'dir",ort );
    return 0;
}