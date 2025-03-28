/* ekranda girilen 5 ADET sehrin (max 40 k) içindeki karakter sayýlarýný ekrana yazan program
Ýzmir
Ankara
Urfa
Uþak
Muþ

ÇIKTI:
Ýzmir - 5
Ankara - 6
Urfa - 4
Uþak - 4
Muþ - 3

*/

#include <stdio.h>
#include <locale.h> 

int main(){
	setlocale(LC_ALL,"Turkish");
	int sayac;
	char kelimeler[5][41];
	// ekradan okuma
	for(sayac=0; sayac<5; sayac++){
		printf("%d. þehir adýný giriniz:", sayac+1);
		scanf("%s", kelimeler[sayac]); // izmir
	}	
	
	// karakter sayisi bul ve listele
	int ks;
	for(sayac=0; sayac<5; sayac++){
		ks=0;
		while(kelimeler[sayac][ks] != '\0') ks++;
		
		printf("%d sehir : %s - %d\n", sayac+1, kelimeler[sayac], ks);
	}
	
	/*
	// ilk kelimenin karakter sayisi!
	int ks=0;
	while(kelimeler[0][ks] != '\0') ks++;
	printf("%s nin karakter sayisi = %d\n", kelimeler[0], ks);
	
	ks=0;
	while(kelimeler[1][ks] != '\0') ks++;
	printf("%s nin karakter sayisi = %d\n", kelimeler[1], ks);
	*/
	

	return 0;
}








