/* ekranda girilen max 10 karakterlik bir kelimedeki kal�n �nl�lerin sayisini bulan progman */
/*  A I O U ?? */

#include <stdio.h>
#include<locale.h> 

int main(){
	setlocale(LC_ALL,"Turkish");
	int adet=0;
	int i;
	char kelime[11];
	// ekrandan okuma
	printf("Max 10 K l�k bir kelime giriniz:");
	scanf("%s", kelime);
	
	
	// kontrol ve sayma
	int ks=0;
	while(kelime[ks]!='\0') ks++;
	
	
	
	for(i=0; i<ks; i++){
		if(kelime[i]=='A' || kelime[i]=='a' || kelime[i]=='�' || kelime[i]=='I' ||kelime[i]=='O' || kelime[i]=='o' ||kelime[i]=='U' || kelime[i]=='u')
			adet++;
	}
	printf("��kt�:%s\n",kelime);
	// ��kt� yaz:
	printf("Kal�n Unl� say�s� = %d\n",adet);

		
	return 0;
}
