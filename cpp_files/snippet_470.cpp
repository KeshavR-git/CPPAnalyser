#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
    int i;
    
        for (i = 0; phrase[i] != '\0'; i++) {
            
            if (((i==0) && (phrase[i] != ' ')) || ((phrase[i] != ' ') && (phrase[i-1] == ' '))) {
                if (phrase[i] >= 97 && phrase[i] <= 122) {
                    phrase[i] = (char)(phrase[i] - ('a' - 'A'));
                }
                i++;
            }
        }
}