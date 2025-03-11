#include <stdio.h>

int main()
{
    char sentence[301];
    printf("Enter a sentence (max 330c):");
    fgets(sentence,300,stdin);
    printf("The sentence is:\n%s",sentence);
    //remove \n
    int cc=0;
    while (sentence[cc]!='\n') cc++;
    sentence[cc]='\0';
    printf("The sentence is:%s.",sentence);
    return 0;
}