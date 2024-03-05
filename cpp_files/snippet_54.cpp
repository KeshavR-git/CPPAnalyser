#include <string.h>

void Capitalise(char* phrase) {
    char* spacePtr = phrase - 1;
    for(; spacePtr != NULL; spacePtr = strchr(spacePtr + 1, ' ')) {
        char charAfterSpace = *(spacePtr + 1);
        if(charAfterSpace != '\0' && charAfterSpace >= 97 && charAfterSpace <= 122)
            *(spacePtr + 1) -= 32;
    }
}