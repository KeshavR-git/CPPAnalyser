void Capitalise(char *phrase) {
    bool stat = 1;
    for (int i = 0; i < strlen(phrase); i++) {
        if (phrase[i] != *" ") {
            if (stat == 1) {
                phrase[i] = toupper(phrase[i]);
                stat = 0;
            }
        }
        else {
            stat = 1;
        }
    }
}