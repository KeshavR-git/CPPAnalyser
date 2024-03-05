#include <stdio.h>
#include <string.h>
#include <ctype.h>

char Capitalise(char str[])
{
    int len = strlen(str);
    
    for (int i = 0; i < len; i++)
    {
        if (i==0)
        {
            str[i] = toupper(str[i]);
        }
        else if (str[i-1] == ' ')
        {
            str[i] = toupper(str[i]);
        }
    }
    return *str;
}