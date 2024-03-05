#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
    int i = 0;
    int j = 0;
    int length = (int)strlen(phrase);
    
    while (phrase[i] != '\0') {
        for (j = 0; j < length; j++) {
            if (phrase[j] == ' ') {
                j += 1;
                if ((phrase[j] >= 'a') && (phrase[j] <= 'z')) {
                    phrase[j] -= 32;
                }
            }
            if ((phrase[0] >= 'a') && (phrase[j] <= 'z')) {
                phrase[0] -= 32;
            }
        }
        i += 1;
    }
}