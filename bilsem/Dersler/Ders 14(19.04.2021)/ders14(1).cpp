#include <iostream>
using namespace std;

char x[1],y[100];
int t=0;
int main()

{
    char str[100];
    cout<<"Enter a string:";
    cin>> y;
    cout<<"You entered " << y << endl;
    
    cout<<"Enter another string:";
    cin>> x;
    for(int i=0;i<101;i++)
    
    if(y[i]==x[0])
    t++;
    cout<<"Girdiğiniz " << y << " kelimesinde " << t << " adet " << x <<" harfi vardır." << endl;
    

    return 0;
}