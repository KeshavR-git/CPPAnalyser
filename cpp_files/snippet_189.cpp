#include <stdio.h>

void Capitalise(char *phrase)
{
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
                phrase[i] = phrase[i] - 32;
            }
        }
        
        if (phrase[i] == ' ') {
            i++;
            if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
                phrase[i] = phrase[i] - 32;
            }
        }
        i++;
    }
}