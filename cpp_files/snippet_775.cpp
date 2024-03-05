#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Capitalise(char *phrase){
    int c;

    for (c = 0; c < strlen(phrase); c++){
        if ((phrase[c] == ' ') && (phrase[c + 1] <= 122) && (phrase[c + 1] >= 97)){
            phrase[c + 1] = phrase[c + 1] - 32;
        }
        else if ((c == 0) && (phrase[c] <= 122) && (phrase[c] >= 97)){
            phrase[c] = phrase[c] - 32;
        }

    }

}