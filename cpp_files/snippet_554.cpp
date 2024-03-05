void Capitalise(char *phrase) {
    if (phrase[0] >= 97 && phrase[0] <= 122) {
        phrase[0] -= 32;
    }
    for (int i = 0; i < strlen(phrase); i++) {
        if (phrase[i] == 32) {
            if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
                phrase[i + 1] -= 32;
            }
        }
    }
}