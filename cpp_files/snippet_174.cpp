#include <stdio.h>
#include <stdlib.h>

void Capitalise(char* phrase)
{
    for (int i = 0; phrase[i] != '\0'; ++i)
    {
        if (phrase[i - 1] == ' ')
        {
            if (phrase[i] >= 'a' && phrase[i] <= 'z')
            {
                phrase[i] = phrase[i] - 32;
            }
        }
        else if (i == 0)
        {
            if (phrase[i] >= 'a' && phrase[i] <= 'z')
            {
                phrase[i] = phrase[i] - 32;
            }
        }
        else
        {
            phrase[i] = phrase[i];
        }
    }
}