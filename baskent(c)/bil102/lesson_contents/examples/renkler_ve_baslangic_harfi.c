/* ekranda girilen 10 adet renk isimlerinden (max 20 k) hangilerinin, 
  yine ekrandan girilen bir harf ile ba�layanlar� listeleyen program */
 
#include<stdio.h>
#include<locale.h> 

int main(){
	setlocale(LC_ALL,"Turkish");

	int i, adet=0;
	char renkler[10][21];
	char harf;
	// okuma
	for(i=0; i<10; i++){
		printf("%d. renk ad�n� giriniz:", i+1);
		scanf("%s", renkler[i]);   //yellow   blue
	}
	
	// harf girme
	printf("Bir harf giriniz:");
	scanf(" %c", &harf);  //  !!!!
	
	// Kar��la�t�r
	for(i=0; i<10; i++){
		if(renkler[i][0] == harf){
			adet++;
			printf("%s rengi %c ile ba�l�yor\n", renkler[i], harf);
		}
	}
	printf("Toplam %d adet renk ad� bulundu\n", adet);
	
	return 0;
}

/*
 �IKTI:
 1. renk ad�n� giriniz:mor
2. renk ad�n� giriniz:sar�
3. renk ad�n� giriniz:ela
4. renk ad�n� giriniz:k�rm�z�
5. renk ad�n� giriniz:beyaz
6. renk ad�n� giriniz:siyah
7. renk ad�n� giriniz:turuncu
8. renk ad�n� giriniz:mavi
9. renk ad�n� giriniz:ye�il
10. renk ad�n� giriniz:kara

Bir harf giriniz:s

sar� rengi s ile ba�l�yor
siyah rengi s ile ba�l�yor
Toplam 2 adet renk ad� bulundu
*/
