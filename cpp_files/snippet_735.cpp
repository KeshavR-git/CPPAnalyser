#include<string.h>
#include<stdio.h>
void Capitalise(char *phrase)
{
    if(phrase[0]>'Z'){
        phrase[0]-=32;
    }
    for (int i=0; i<=strlen(phrase);i++){
        if (phrase[i] == ' ' && phrase[i+1]>='Z'){
            phrase[i+1]-='a'-'A';
        }
    }
    return;
}