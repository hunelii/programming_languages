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
		printf("%d. renk adýný giriniz:", i+1);
		scanf("%s", renkler[i]);
	}
	
	// harf girme
	printf("Bir harf giriniz:");
	scanf(" %c", &harf);  //  !!!!
	
	// Karþýlaþtýr
	int ks;
	for(i=0; i<10; i++){
		// harf sayýsý bul
		ks=0;
		while(renkler[i][ks] != '\0') ks++;
		// karþýlaþtýr		
		if(renkler[i][ks-1] == harf){
			adet++;
			printf("%s rengi %c ile bitiyor\n", renkler[i], harf);
		}
	}
	printf("Toplam %d adet renk adý bulundu\n", adet);
	
	return 0;
}

/* ÇIKTI
1. renk adýný giriniz:mor
2. renk adýný giriniz:mor
3. renk adýný giriniz:mor
4. renk adýný giriniz:sari
5. renk adýný giriniz:kirimizi
6. renk adýný giriniz:yeþil
7. renk adýný giriniz:kara
8. renk adýný giriniz:siyah
9. renk adýný giriniz:beyaz
10. renk adýný giriniz:tuurncu
Bir harf giriniz:i

sari rengi i ile bitiyor
kirimizi rengi i ile bitiyor

Toplam 2 adet renk adý bulundu*/


