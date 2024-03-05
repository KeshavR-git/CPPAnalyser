#include <stdio.h> 
#include <string.h>

int Capitalise(char* string) {

    int length = strlen(string);

    for (int i = 0; i < length; i++) {
        if ((string[0] < 123) && (string[0] > 96)) { // Lowercase letter
            string[0] = string[0] - 32;
        }
        if ((string[i + 1] > 96) && (string[i] == 32) && (string[i + 1] < 123)) {
            string[i + 1] = string[i + 1] - 32;
        }
    }
    return 0;
}