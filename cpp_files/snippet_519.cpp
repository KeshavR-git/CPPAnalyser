#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase){
    
    // disclose local variables
    int i;
    int len = strlen(phrase);
    
    // convert first to capital
    if (phrase[0] >= 'a' && phrase[0] <= 'z'){
        phrase[0] = phrase[0] - 32;
    }
    
    // scan through array
    for (i = 1; i <= len; i++){
        // if space, next is capital
        if (phrase[i] == ' '){
            
            // checks if next is lowercase letter
            if (phrase[i+1] >= 'a' && phrase[i+1] <= 'z'){
                phrase[i+1] = phrase[i+1] - 32;
            }
        }
    }
}