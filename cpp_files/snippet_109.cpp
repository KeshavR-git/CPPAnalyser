#include <string.h>

void Capitalise(char *phrase)
{
    int capNext = 1;

    for(int i = 0; i < strlen(phrase); i++)
    {
        char letter = phrase[i];
        if(capNext && letter >= 'a' && letter <= 'z') phrase[i] -= 32;
        else if(!capNext && letter == ' ') capNext = 1;
        if(letter != ' ') capNext = 0;
    }
}