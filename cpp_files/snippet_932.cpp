#include <stdio.h>
#include <ctype.h>
#include <string.h>


void Capitalise(char *phrase){
    
    int i;
    int phraseLength = strlen(phrase);

    for (i = 0; i <= phraseLength; i++){
        if(phrase[i-1] == ' '){
        phrase[i] = toupper(phrase[i]);
        }
        if(i == 0){
        phrase[i] = toupper(phrase[i]);
        }
        
    }
    return;
}