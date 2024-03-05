#include <stdio.h>
#include <ctype.h>

void Capitalise(char *phrase){
    
     int i=0;

    phrase[i] = toupper(phrase[0]);
    i++;
    while(phrase[i] != '\0')
    {
        if(isspace(phrase[i])) 
        {
            phrase[i] = phrase[i];
            phrase[i+1] = toupper(phrase[i+1]);
            i+=2;
        }
        else
        {
            phrase[i] = phrase[i];        
            i++;
        }
    }
    
}