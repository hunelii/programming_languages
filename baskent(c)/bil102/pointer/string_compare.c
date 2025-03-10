//strcmp( , ) == > < >= <=
//strcpy( , ) =
//strcat(a,b) a=a+b a+=b

//strncmp( , , ) == > < >= <=
//strncpy( , , ) =
//strncat(a,b, ) a=a+b a+=b

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
	char name[50], nick[50];
	int i;
	printf("enter ur name\n");
	scanf("%s", name);
	//if (name=="Ahmet"){
	//string upper case
	name[0]= toupper(name[0]);
	for (i=1; name[i]!= '\0'; i++) {
		name[i]=tolower(name[i]);
	}
	if(strcmp(name,"Ahmet") == 0) {
		printf("merhaba %s\n",name);
		strcpy(nick,name);
	}
	else{
		printf("seni tanimiyorum!\n");
	    strcpy(nick,"unknown user");
	}
	printf("Enter ur nick:\n");
	scanf("%s",nick);
	strcpy(nick,name);
	
	char surname[50];
	printf("enter ur surname\n");
	scanf("%s",surname);
	
	char fullname[101];
	strcat(fullname,name);
	strcat(fullname," ");
	strcat(fullname,surname);
	printf("%s\n", fullname);
	return 0;
}