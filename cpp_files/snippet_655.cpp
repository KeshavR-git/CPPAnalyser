void Capitalise(char* phrase);
void Capitalise(char* phrase){
    int length = 0;
    while (phrase[length] != '\0') {
        length++;
    }

    int i;
    if ('a' <= phrase[0] && phrase[0] <= 'z') {
        phrase[0] -= 32;
    }
    for (i = 0; i < (length - 1); i++) {
        if ((phrase[i] == ' ') && ('a' <= phrase[i + 1] && phrase[i + 1] <= 'z')) {
            phrase[i + 1] -= 32;
        }
    }
}