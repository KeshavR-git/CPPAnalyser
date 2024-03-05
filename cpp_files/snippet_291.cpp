#include <stdio.h>
#include <string.h>
#define MAX 1000

void Capitalise(char *phrase) {
    
    int i = 1;
    
    if(phrase[0] >= 'a' && phrase[0] <= 'z') {
    phrase[0] = phrase[0] - 32;
    }
    
    for(i = 1; phrase[i] != '\0'; i++) {
        if((phrase[i - 1] == ' ') && (phrase[i] >= 'a') && (phrase[i] <= 'z')) {
        phrase[i] = phrase[i] - 32;
        }
    }
}