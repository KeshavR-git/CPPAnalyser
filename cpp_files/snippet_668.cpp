#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void Capitalise(char* phrase)
{
    int i;
    int len;
    
    i = 0;

    len = strlen(phrase);
    if (phrase[0] > 96 && phrase[i] < 123)
    {
        phrase[0] = phrase[0] - 32;
    }

    for (i = 1; i < len; i++)
    {
        if (phrase[i - 1] == 32 && phrase[i] > 96 && phrase[i] < 123)
        {
            phrase[i] = phrase[i] - 32;
        }
    }
}