void Capitalise(char* phrase) {
    int i;
    int length = strlen(phrase);
    for (i = 0; i < length; i++) {
        if (phrase[i - 1] == ' ' || i == 0) {
            if (phrase[i] >= 97) {
                phrase[i] -= 32;
            }
        }
    }
}