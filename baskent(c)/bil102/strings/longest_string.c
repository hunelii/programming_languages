#include <stdio.h>
#include <string.h>
#define M 5
int main()
{
    char words[M][101],wordsChar[M];
    int i,j;
    for(i=0;i<M;i++){
        printf("enter the %d. word\n",i+1);
        scanf("%s",words[i]);
    }
    int charCount=0,max=0,maxIndex;
    char longestWord[101];
    for(i=0;i<M;i++){
        while(words[i][charCount]!='\0') {
            charCount++;
            //printf("charCount=%d\n",charCount);
        }
        wordsChar[i]=charCount;
        if(wordsChar[i]>max){
            max=wordsChar[i];
            maxIndex=i+1;
            strcpy(longestWord,words[i]);
        }
        charCount=0;
    }
    
    printf("the longest word has %d characters\n",max);
    printf("the longest word index is  %d\n",maxIndex);
    printf("the longest word is %s\n",longestWord);

    return 0;
}