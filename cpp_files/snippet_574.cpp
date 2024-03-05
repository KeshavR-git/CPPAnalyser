#include <stdio.h>
#include <string.h>

/* This function capitalizes the first character of every word */
void Capitalise(char *phrase)
{
    int i;

    if ((phrase[0] < 123) && (phrase[0] > 96)) {
        phrase[0] = phrase[0] - 32;
    }

    for (i = 1; i < strlen(phrase); i++) {
        int ascii;
        ascii = phrase[i];  
        
        if ((ascii < 123) && (ascii > 96) && phrase[i-1] == 32) {
            phrase[i] = phrase[i] - 32;
        }
    }
}