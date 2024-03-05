#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
void Capitalise(char* phrase) {
    int i=0, length;

    length = strlen(phrase);
    while (i < length) {
        if (i == 0) 
        {
            phrase[i] = toupper(phrase[i]);
        }
        else if (phrase[i] == ' ')
        {

            phrase[i + 1] = toupper(phrase[i + 1]);

        }
        i++;
    }
}