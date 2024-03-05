#include <stdio.h>

void Capitalise(char *phrase){
    int i = 0;
    
    while (phrase[i] != '0'){
        
        if ((phrase[i] >= 97) && (phrase[i] <= 122)
        && (i == 0 || phrase[i - 1] == ' ')){
            
            phrase[i] = (phrase[i] - 32);
        }
        
        i++;
    }
}