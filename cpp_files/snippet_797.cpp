#include<string.h>
#include<ctype.h>
void Capitalise(char *phrase)
{
    int i = 0;
    int maxl = strlen (phrase) - 1;
      phrase[i]=toupper(phrase[i]);
      //i++;
    while (i<=maxl)
    {
        if(phrase[i]==' ')
        {
       phrase[i+1]=toupper(phrase[i+1]); 
      
        }
       i++;
    }
     //return phrase;
}