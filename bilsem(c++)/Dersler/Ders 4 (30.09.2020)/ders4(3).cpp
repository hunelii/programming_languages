#include <stdio.h>
int d;
int main()
{
    int x;
    /*
    ödev:     while kullanarak doğru cevap verilene kadar soruyu tekrar soran program.
    Bu arada kaç tane yanlış cevap verildi saysın.
     */    
	printf("3+5*7-4/2 işleminin sonucu kaçtır?");
    scanf("%d", &d);
     if(d==3+5*7-4/2)
   {printf("Bildiniz");}
   else  
   {printf("Bilemediniz");}    
return 0;
}