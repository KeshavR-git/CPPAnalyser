#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
    int x;
    for(x=0; x<strlen(phrase); x++)
    {
        if ((x==0||phrase[x-1]==' ') && (phrase[x]>='a'&&phrase[x]<='z'))
            phrase[x]=toupper(phrase[x]);
    }
    return;
}