/*
LENGTH OF A STRING (Number of Characters)
*/
#include <stdio.h>
#include <string.h>   / must for strlen function

int main(){


	char word1[]="Mehmet Akif";
	char word2[]={'M','e','h','m','e','t',' ','A','k','i','f','\n','\n','\0'};

	int count;
	count=sizeof(word1); // '\0' included
	printf("Length of %s is %d\n", word1, count-1);

	count=sizeof(word2); // '\0' included
	printf("Length of %s is %d\n", word2, count-1);
	
	for(count=0; word1[count]!='\0' && word1[count]!='\n'; count++);  // '\0' NOT included
	printf("Length of %s is %d\n", word1, count);

	count=strlen(word1);   // '\0' NOT included
	printf("Length of %s is %d\n", word1, count);
	
	printf("Pleae enter a string again:");
	fgets(word1,12, stdin);
	count=strlen(word1);   // '\0' NOT included
	printf("Length of %s is %d\n", word1, count);
	
	count=strlen(word2)-1;   // '\0' NOT included
	printf("Length of %s is %d\n", word2, count);
	
	

	return 0;
}
