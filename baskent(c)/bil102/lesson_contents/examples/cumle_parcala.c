/*
ekranda girilen bir cumleyi
yine ekrandan girilen bir karaktere göre 
parcalara ayiran program

535-600-55-33

02/03/2022
2/3/2022

*/
#include <stdio.h>
#include <string.h>

int main(){
	char cumle[200];
	char ayiriciString[2];  // min 2 olmali
	char *sonucPtr;
	int i=0;
	
	printf("Cumle gir:");
	fgets(cumle, 200, stdin);
	
	printf("Karakter gir:");
	//fgets(kelime, 10, stdin); \n bunu eklediði için bozuyor!!!
	scanf("%s", ayiriciString);   // tek karakter girilmeli
	printf("Girilen karakter: %s.\n", ayiriciString);
	
	
	// PARCALARA ayir
	sonucPtr=strtok(cumle, ayiriciString);
	while(sonucPtr != NULL){
		i++;
		printf("%d. parca = %s\n",i,sonucPtr);
		sonucPtr=strtok(NULL, ayiriciString);
	}
	return 0;
}

