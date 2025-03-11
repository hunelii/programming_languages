#include <stdio.h>
#include <string.h>
#define M 5
int main()
{
    char words[M][101],aranan[101];
    int i,j,charCount;
    for(i=0;i<M;i++){
        printf("enter the %d. word\n",i+1);
        scanf("%s",words[i]);
    }
    for(i=0;i<M;i++){
        charCount=0;
        while(words[i][charCount]!='\0') charCount++;
        if (words[i][charCount-1]=='n' && words[i][charCount-2]=='a'){
            strcpy(aranan,words[i]);
        }
    }
    printf("\n\n%s",aranan);



    return 0;
}