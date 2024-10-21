/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

karar vermedeki operatörler
<
>
==
!=
<=
>=
a++    a=a+1
d decimal onluk sayıs sistemi
*******************************************************************************/
#include <stdio.h>
int a=0;
int main()
{ 
    // 1 den 20 ye kadar olan sayıları yazdır ekrana
 //şart ya da dögüler
while(true)
   {  a++;// a 1 oldu
     if(a<100)
       printf("%d  ",a);
     else
    {  
        printf("a nın son değeri= %d", a);
        return 0;
    }
   }
 return 0;
}