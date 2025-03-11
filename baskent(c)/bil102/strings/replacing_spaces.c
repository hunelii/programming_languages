#include <stdio.h>
#include <ctype.h> //is ile başlayan tüm kütüphanelerde gerekir
int main()
{
    int i;
    char fileName[257];
    printf("Enter a file name (max 256c):");
    fgets(fileName,257,stdin);
    printf("Your filename is:%s\n",fileName);
    printf("------------------------\n");
    //remove \n
    int cc=0;
    while (fileName[cc]!='\n') cc++;
    fileName[cc]='\0';
    for(i=0;i<cc;i++){
        if(isspace(fileName[i])!=0) fileName[i]='-';
    }
    printf("Your filename is:%s\n",fileName);
    return 0;
}