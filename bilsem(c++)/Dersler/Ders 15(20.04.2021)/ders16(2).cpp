#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int a,b,c,d,e,f,top,ort;
int* x[6]={&a,&b,&c,&d,&e,&f};
int main()
{
    cout<<"Lütfen altı sayı giriniz:";
    for(int i=0;i<6;i++)
    {
    cin>>*x[i];
    }
    top=a+b+c+d+e+f;
    ort=top/6;
    printf("Girdiğiniz 6 sayının ortalaması:%d'dir",ort );
    return 0;
}