/*Description: This program takes a single string as input representing a 
phrase, and capitalises the first character in each word in the phrase
* Created by Daniel Stoddart on Oct 10, 2021
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char *phrase)
{
    int i;
    
    for (i = 0; i < strlen(phrase); i++){
        if ((phrase[i - 1] == 0 || phrase[i - 1] == 32) && phrase[i] > 96 && phrase[i] < 123){
            phrase[i] = toupper(phrase[i]);
        }
    }
}