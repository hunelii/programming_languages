/*
ekranda girilen bir cumlede, yine ekrandan girilen bir 
kelimeyi arayan program
*/
#include <stdio.h>
#include <string.h>

int main(){
	char cumle[200];
	char kelime[10];
	char *sonuc;
	int adet=0;
	
	printf("Cumle gir:");
	fgets(cumle, 200, stdin);
	
	
	printf("Kelime gir:");
	//fgets(kelime, 10, stdin); /n bunu eklediði için bozuyor!!!
	scanf("%s", kelime);
	//strcpy(kelime, "-");  // kelime = "-";
	
	// Bir kez ARAMA
	printf("Varmi yokmu?..:");
	if(strstr(cumle, kelime) != NULL)
		printf("Var\n");
	else
		printf("Yok\n");
		
	// cok kez arama
	printf("\nKac defa var?..:");
	sonuc=strstr(cumle, kelime);
	while(sonuc != NULL){
		sonuc++;
		adet++;
		sonuc=strstr(sonuc, kelime);
	}
	printf("Toplam %d adet bulundu\n",adet);
	

	return 0;
}

