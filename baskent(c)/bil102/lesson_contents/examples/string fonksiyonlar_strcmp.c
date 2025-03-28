#include <stdio.h>
#include <string.h>
 
int main(){
   char ad1[20];
   char ad2[20];
   printf("Lutfen adinizi giriniz:");
   scanf("%s", ad1);
   printf("ad1=%s\n", ad1);
   
	//strcpy(ad2, ad1); //  ad2=ad1;  
	
	
	//"Halil" "Cem"   ad2 ---> "HalilCem"
	//strcat(ad2, ad1);  //ad2 += ad1;

	printf("Lutfen 2. adinizi giriniz:");
   scanf("%s", ad2);
   printf("ad2=%s\n", ad2);
   
   printf("strcmp(%s,%s)=%d\n\n", ad1, ad2,strcmp(ad1, ad2));
   

   
	if(strcmp(ad1, ad2)==0){ // if(ad1>ad2)
	   printf("Bu iki string esittir");
   }
 	if(strcmp(ad1, ad2)==-1){
	   printf("Bu iki string esit degildir, ilk string once gelir");
   }

 	if(strcmp(ad1, ad2)==1){
	   printf("Bu iki string esit degildir, ikinci string once gelir");
   }


	
	
   
   
    return 0;
	
}
