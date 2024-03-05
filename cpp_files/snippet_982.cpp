void Capitalise(char* phrase) {
    if ((phrase[0] > 96) && (phrase[0] < 129)) {
        phrase[0] = phrase[0] - 32;
    }
    for (int i = 1; i < strlen(phrase); i++) {
        if (((phrase[i] == 32) && (i < strlen(phrase) - 1)) && (phrase[1 + i] > 96)) {
            phrase[1 + i] = phrase[1 + i] - 32;
        }
    }
}