#include <stdio.h>
#include <ctype.h>
#include <string.h>
void Capitalise(char *phrase)
{
    int i;
    char space[1]=" ";
    int l=strlen(phrase);
    phrase[0]=toupper(phrase[0]);
    for (i=1;i<l;i++){
        if (phrase[i-1]==space[0]){
            phrase[i]=toupper(phrase[i]);
        }
    }
    
}