#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char *phrase)
{
    int i;
    int max = strlen(phrase);
  
    phrase[0] = toupper(phrase[0]);
    
    for (i=0; i < max; i++) {
        if (phrase[i-1] == ' ') {
            phrase[i] = toupper(phrase[i]);
        }
    }
}