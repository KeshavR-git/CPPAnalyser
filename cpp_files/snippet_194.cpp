#include <string.h>

void CapLetter(char *phrase, int index);
/**
 * Capitalise start of words phrases
 * @param phrase Pharse to cap
 */
void Capitalise(char *phrase)
{
    int strLength = strlen(phrase);
    // Always cap first letter if it is letter
    if ((phrase[0]>=97) && (phrase[0]<=122)) {
        CapLetter(phrase, 0);
    }
    
    for(int i=1; i<strLength; i+=1) {
        char letterBefore = phrase[i-1];
        char letterCurrent = phrase[i];
        if ((letterBefore==32) && (letterCurrent>=97) && (letterCurrent<=122)) {
            CapLetter(phrase, i);
        }
    }
}

/**
 * Cap a letter
 * @param phrase Phrase 
 * @param index Letter inddex
 */
void CapLetter(char *phrase, int index) {
    phrase[index] = phrase[index] - 32;
}