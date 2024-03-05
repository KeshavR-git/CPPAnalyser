void Capitalise(char *phrase) {
    if ( (phrase[0] > 96) && (phrase[0] < 123) ) {
        phrase[0] = phrase[0] - 32;
    }
    for (int i = 1; i <  strlen(phrase); i++) {
        if ( ((phrase[i] == 32) && (i < strlen(phrase) - 1)) && ( phrase[i+1] > 96 ) ) {
            phrase[i + 1] = phrase[i+1]  - 32;
        }
    }
}