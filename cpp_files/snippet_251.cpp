#include <stdio.h>
#include <string.h>
// call a ctype.h from library to use the toupper as the capitalization function
#include <ctype.h>

// EXERCISE 3
// Author: Leo Yan
void Capitalise(char *phrase)
{
int i = 0;

while(phrase[i]!=0){
    phrase[0]=toupper(phrase[0]);
    if(phrase[i]==' '){
        phrase[i+1]=toupper(phrase[i+1]);
    }
    i++;
}
}