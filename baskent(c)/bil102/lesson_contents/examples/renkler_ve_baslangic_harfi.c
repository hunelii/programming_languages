/* ekranda girilen 10 adet renk isimlerinden (max 20 k) hangilerinin, 
  yine ekrandan girilen bir harf ile baþlayanlarý listeleyen program */
 
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
		scanf("%s", renkler[i]);   //yellow   blue
	}
	
	// harf girme
	printf("Bir harf giriniz:");
	scanf(" %c", &harf);  //  !!!!
	
	// Karþýlaþtýr
	for(i=0; i<10; i++){
		if(renkler[i][0] == harf){
			adet++;
			printf("%s rengi %c ile baþlýyor\n", renkler[i], harf);
		}
	}
	printf("Toplam %d adet renk adý bulundu\n", adet);
	
	return 0;
}

/*
 ÇIKTI:
 1. renk adýný giriniz:mor
2. renk adýný giriniz:sarý
3. renk adýný giriniz:ela
4. renk adýný giriniz:kýrmýzý
5. renk adýný giriniz:beyaz
6. renk adýný giriniz:siyah
7. renk adýný giriniz:turuncu
8. renk adýný giriniz:mavi
9. renk adýný giriniz:yeþil
10. renk adýný giriniz:kara

Bir harf giriniz:s

sarý rengi s ile baþlýyor
siyah rengi s ile baþlýyor
Toplam 2 adet renk adý bulundu
*/
