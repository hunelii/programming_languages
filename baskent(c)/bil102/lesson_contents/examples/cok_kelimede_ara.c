/*
ekranda girilen 10 il arasinda, 
benim guzel memleketim varmi? yi bulan programý
*/
#include <stdio.h>

int main(){
	char iller[10][20];
	char memleket[20];
	int i;
	for(i=0; i<10; i++){
		printf("%d. ili giriniz:", i+1);
		scanf("%s", iller[i]);
		
	}
	
	printf("Meleketinizi giirniz");
	scanf("%s", memleket);
	
	for(i=0; i<10; i++){
		if(strcmp(iller[i],memleket)==0){
			printf("Memleketiniz %d. il olarak bulunmustur\n",i+1);
		}
	}


	return 0;
}

