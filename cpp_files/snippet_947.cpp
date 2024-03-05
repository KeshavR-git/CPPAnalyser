#include <ctype.h>
#include <string.h>
void Capitalise(char *phrase){
    phrase[0] = toupper(phrase[0]);
    int length = strlen(phrase);
    int i;
    for(i = 1;i < length;i++){
        if(phrase[i-1]== ' '){
            phrase[i] = toupper(phrase[i]);
        }
    }
}