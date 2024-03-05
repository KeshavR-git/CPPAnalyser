void Capitalise(char *phrase) {
    int i;
    int length = strlen(phrase);

    for (i = 0; i < length; i++) {
        if (phrase[i] == ' ' && phrase[i + 1] > 96) {
            phrase[i + 1] -= 32;
        }

        if (phrase[0] > 96) {
            phrase[0] -= 32;
        }
    }
}