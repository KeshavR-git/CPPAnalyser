/*This function which takes a single string as input representing a phrase, and 
capitalises the first character in each word in the phrase.  Only lower case 
alphabetic characters (that is, ‘a’ - ‘z’) should be capitalised.  A word may be
composed of numeric, alphabetic or punctuation characters.  You can assume the 
input string will have at least one character. 
Author: Elizabeth Lemoe*/

#include <ctype.h>
void Capitalise(char *phrase){
    int i;
    int length;
    
    length = strlen(phrase);
    
    for (i=0; i<length;i++){
        if(i==0){
        phrase[i]= toupper(phrase[i]);
        }
        else if (phrase[i]==' '){
        phrase[i+1]=toupper(phrase[i+1]);
        }
    }
}