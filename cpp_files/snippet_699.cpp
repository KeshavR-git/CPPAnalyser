#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
    int i;
    for(i=0; i<strlen(phrase); i++)
    {
        if ((i==0||phrase[i-1]==' ') && (phrase[i]>='a'&&phrase[i]<='z'))
            phrase[i]=toupper(phrase[i]);
    }
    return;
}