#include <stdio.h>
#include <string.h>

void precap(char *phrase, int pos)
{
    if (phrase[pos] >= 97 && phrase[pos] <= 122) {
        phrase[pos] = (char) (phrase[pos] - ('a' - 'A'));
    }
}

void Capitalise(char *phrase)
{
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            precap(phrase, 0);
        } else if (phrase[i-1] == ' '){
            precap(phrase, i);
        }
        i++;
    }
}