#include <stdio.h>
#include <stdlib.h> // needed for atof, atoi, atol, strtod, strtol, stroul

int main(){
	char word[20];   // max 19;
	printf("Enter a word:");
	scanf("%s", word);
	
	int intNumber;
	intNumber=atoi(word);
	printf("intNumber is %d\n", intNumber);
	
	float floatNumber;
	floatNumber=atof(word);
	printf("floatNumber is %f\n", floatNumber);
		
	long longNumber;
	longNumber=atol(word);
	printf("longNumber is %ld\n", longNumber);
	
	
	char *p;  // to hold rest  of the string (non-numeric part)
	double doubleNumber;
	doubleNumber=strtod(word, &p);
	printf("doubleNumber is %lf, rest of the string is \"%s\".\n", doubleNumber, p);
	
	longNumber=strtol(word, &p, 10); // input is in 10 base
	printf("longNumber is %ld, rest of the string is \"%s\".\n", longNumber, p);
	
	longNumber=strtoul(word, &p, 10);
	printf("longNumber is %ld, rest of the string is \"%s\".\n", longNumber, p);


	return 0;
}
