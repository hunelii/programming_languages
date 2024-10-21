#include <iostream>
using namespace std;

char x[100],yeni;
int t=0,y,i;
int main()

{
    char str[100];
    cout<<"Enter a string:";
    cin>> x;

    for (i=0;i<100;i++)
    {
    y = ("%d", x[i]);
    //printf("%d ", y);
    if(64<y && y<90 or 96<y&& y<123)
    t++;
    }
    
    cout<<"Girdiğiniz " << x << " kelimesi " << t <<" harflidir." << endl;
    
    for (i=0;i<t;i++)  
    {  
        cout<<x[i];
    }
    

    return 0;
}