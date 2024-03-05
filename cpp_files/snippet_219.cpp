#include <stdio.h>
#include <string.h>
void Capitalise(char *phrase)
{
    int i;
    int x = strlen(phrase);
    for (i=0;i<x;i++)
    {
        if ((phrase[0]>90) || ((phrase[i]>90) && (phrase[i-1]==32)))
        {
            phrase[i]=phrase[i]-32;
        }
        else
        {
        }
    }
}