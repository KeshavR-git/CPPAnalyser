/* The Capitalise() function takes a single string as input representing a phrase, and
capitalises the first character in each word in the phrase. Only lower case alphabetic characters (that
is, ‘a’ - ‘z’) should be capitalised   */
#include <stdio.h>
#include <string.h>

// Helper function that checks if chracter is lowercase and converts to uppercase if it is
char Cap(char *word)
{
    if (word[0] >= 97 && word[0] <= 122) {
        word[0] = word[0] - (32); 
    }
    return *word;
}
void Capitalise(char *phrase)
{
    int i;
    Cap(phrase);

    for (i = 0; i < strlen(phrase) - 1;  i++) {
        if (phrase[i] == ' '){
            Cap(&phrase[i+1]);
        }
    }
}