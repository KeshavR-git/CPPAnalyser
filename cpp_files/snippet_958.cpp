#include <string.h>
#include <ctype.h>

void Capitalise(char *phrase)
{   
    char *space = " ";
    int cap = 1;
    int length = (int)strlen(phrase);
    int i;
    for (i=0; i<length; i++) {
        if (cap == 1) {
            phrase[i]=toupper(phrase[i]);
            cap = 0;
        }
        if (phrase[i]==*space)
            cap = 1;
    }
}