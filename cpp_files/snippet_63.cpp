#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

void Capitalise(char *phrase)
{
    int i = 0;
    phrase[0] = toupper(phrase[0]);
    while(phrase[i] != 0)
    {
        if (isspace(phrase[i]) != 0)
        {
            phrase[i+1] = toupper(phrase[i+1]);
        }
        i++;
    }
}