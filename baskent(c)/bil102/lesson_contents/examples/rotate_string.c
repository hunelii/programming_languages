/*
Write a C program that rotates a string in user-entered-numer times.

Sample output:
Enter string: Today it is shining.
Enter ratotion number:1
----------------------------------
oday it is shining.T

Enter string: Today it is shining.
Enter ratotion number:5
----------------------------------
 it is shining.Today
*/
#include <stdio.h>
#include <string.h>
// READ ÝNPUT
int main(){
	char sentence[30], yedek;
	int rotationNumber,i,no_Of_Char,x;
	printf("Enter a string:");
	fgets(sentence, 30, stdin);
	printf("Enter a rotation number:");
	scanf("%d", &rotationNumber);
	
	// rotate
for(x=1; x<=rotationNumber; x++){	
	yedek=sentence[0];  // T;
	no_Of_Char=strlen(sentence); // 19
	for(i=0; i<no_Of_Char-2; i++){ // 17
		sentence[i]=sentence[i+1];
	}
	sentence[i]=yedek;
}
	// WRITE OUTPUT
	printf("%s", sentence);
	return 0;
}



