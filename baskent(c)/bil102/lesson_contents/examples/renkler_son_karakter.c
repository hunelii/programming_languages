/* ekranda girilen 10 adet renk isimlerinden (max 20 k) hangilerinin, yine ekrandan 
 girilen bir harf ile bitenleri !!!!!! listeleyen program */
 
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
		scanf("%s", renkler[i]);
	}
	
	// harf girme
	printf("Bir harf giriniz:");
	scanf(" %c", &harf);  //  !!!!
	
	// Kar��la�t�r
	int ks;
	for(i=0; i<10; i++){
		// harf say�s� bul
		ks=0;
		while(renkler[i][ks] != '\0') ks++;
		// kar��la�t�r		
		if(renkler[i][ks-1] == harf){
			adet++;
			printf("%s rengi %c ile bitiyor\n", renkler[i], harf);
		}
	}
	printf("Toplam %d adet renk ad� bulundu\n", adet);
	
	return 0;
}

/* �IKTI
1. renk ad�n� giriniz:mor
2. renk ad�n� giriniz:mor
3. renk ad�n� giriniz:mor
4. renk ad�n� giriniz:sari
5. renk ad�n� giriniz:kirimizi
6. renk ad�n� giriniz:ye�il
7. renk ad�n� giriniz:kara
8. renk ad�n� giriniz:siyah
9. renk ad�n� giriniz:beyaz
10. renk ad�n� giriniz:tuurncu
Bir harf giriniz:i

sari rengi i ile bitiyor
kirimizi rengi i ile bitiyor

Toplam 2 adet renk ad� bulundu*/


