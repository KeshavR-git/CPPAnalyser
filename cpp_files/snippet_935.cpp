#include <ctype.h>
void Capitalise(char *phrase){
    
    // initialise variable types
    int i;
    int length;
    
    //find length of string
    length = strlen(phrase);
    
    // step through elements of string array and change first letter of all
    // words to capitals.
    for(i = 0; i< length; i++){
        if(i == 0){
            phrase[i]=toupper(phrase[i]);
        }
        else if(phrase[i]==' '){
            phrase[i+1]=toupper(phrase[i+1]);
        }
    }
}