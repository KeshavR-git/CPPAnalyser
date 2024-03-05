#include <stdio.h>
#include <ctype.h>

void Capitalise(char *phrase){
    
    int i=0;

    phrase[i] = toupper(phrase[0]); //The toupper function changes lowercase letters to uppercase ones
    i++;
    while(phrase[i] != '\0')
    {
        if(isspace(phrase[i]))//The isspace function checks whether a character is white space or not
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