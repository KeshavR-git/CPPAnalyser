void Capitalise(char *phrase) {
    int wordlen = strlen(phrase);
    int i;

    for (i = 0; i < wordlen; i++) {
        if (i == 0) {
            phrase[i] = toupper(phrase[i]);
        }
        else if (phrase[i] == ' ') {
            phrase[i+1] = toupper(phrase[i+1]);
        }
    }
}