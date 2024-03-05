/*This function capitalises the first letter of words in a phrase (character 
array*/
#include <stdio.h>

void CapLetter(char *phrase, int index){
    
    if (phrase[index] >= 'a' && phrase[index] <= 'z'){
        phrase[index] = phrase[index] - 32;
    }
}

void Capitalise(char *phrase){
    
    //Determine length of character array for indexing
    int length = 0;
    while(phrase[length] != '\0'){
        length++;
    }
    
    //Capitalise first letter of the string
    CapLetter(phrase,0);
    
    int i = 0;
    while(i <= length){
        if(phrase[i] == ' '){
            CapLetter(phrase, i+1);
        }
        i++;
    }
}