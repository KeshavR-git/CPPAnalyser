#include <ctype.h>

void Capitalise(char *phrase){
    int i = 1;
    int x = strlen(phrase);
    phrase[0] = toupper(phrase[0]);
        while(i<x){
                if (phrase[i-1] == ' '){
                        phrase[i] = toupper(phrase[i]);
                }
                i++;
        }

    return;

}