#include <ctype.h>
#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase){

int length = strlen(phrase), i = 1;
phrase[0] = toupper(phrase[0]);
while (i<length){
    if(phrase[i-1] == ' '){
        phrase[i] = toupper(phrase[i]);

    }

  i=i+1;
}




return;
}