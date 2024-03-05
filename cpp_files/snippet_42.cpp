#include <stdio.h>
#include <string.h>
int isChar(int letter){
    if (letter<123 && letter>96){
        return 1;
    }
    else{
        return 0;
    }
}
void Capitalise(char *phrase){
    int length = strlen(phrase);
    if (isChar(phrase[0]) == 1 ){
        phrase[0] -= 32;
    }
    for(int i=1; i<length; i++){
        if ((isChar(phrase[i]) == 1) && phrase[i-1] == 32 ){
            phrase[i] -=32;
        }
    }
}