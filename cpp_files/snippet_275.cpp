#include <ctype.h>
void Capitalise(char *phrase) {
    int sentence = strlen(phrase), x = 1;
phrase[0] = toupper(phrase[0]);
while (x<sentence) {
    if(phrase[x-1] == ' ') {
        phrase[x] = toupper(phrase[x]);
    }
    x = x+1;
}
return;
}