/******************************************************************************değişkenler variable
sabit constsayısal
karakter    string char yaşıyor   7*8=56 bit
1 byte   = 8 bit = 11111111 = 255
mantıksal  boolean---> true -1-  false-0- 1 bit
=
=!
=<
>
<=
>=
kontrol    
4==2    
false if 
(mantıksal)"esra"==isim__> true ya da false
7<9    -->true
n=7<9      
n içine true değerini koyarım*******************************************************************************/
#include <stdio.h>
const int b=5;
bool a;
int main()
{
     a=b==6;
    printf("%d",a==false);
    if(b==5)
    {
    printf("merhaba");
// true ise bu kısım
    }    
		else    
		{        
		printf("bir sorun var");
        //false ise bu kısım    
		}     
		while(b==5)
     {
	   printf("1");
	   }    
			//soru: iki tane integer değikene değer verin. bu değerler
     //eşit ise ekrana eşit yazsın, değilse farklı yazsın    return 0;}
