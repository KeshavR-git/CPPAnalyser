#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Capitalise(char *phrase);

void Capitalise(char *phrase)
{
    int i;
    if (phrase[0])
    {
        phrase[0] = toupper(phrase[0]);
    }
    for (i = 1; i < strlen(phrase); i++)
    {
        if ((phrase[i - 1] == ' ' && phrase[i]) == 1)
        {
            phrase[i] = toupper(phrase[i]);
        }
    }
    i = strlen(phrase);
    while (i){
        int j= i;
        while (j && j!=' ') j--;
        i=j;
    }
}