#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char *phrase)
{
    int i;
    int length;
    length = strlen(phrase);

    for (i=0; i<length; i++) {
        if (i == 0) {
            phrase[i]=toupper(phrase[i]);
        } else if (phrase[i] == ' ') {
            phrase[i+1] = toupper(phrase[i+1]);
        }
    }
   
}