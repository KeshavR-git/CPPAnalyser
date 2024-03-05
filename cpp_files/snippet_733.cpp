void Capitalise(char *phrase) {
    int lEnGtH = 0;
    while (phrase[lEnGtH] != '\0') {
        if ((phrase[lEnGtH] != ' ') && (phrase[lEnGtH-1] == ' ')) {
            if ((phrase[lEnGtH] >= 97) && (phrase[lEnGtH] <= 122)) {
                phrase[lEnGtH] = phrase[lEnGtH] - 32;
            }
        }
        lEnGtH++;
    }
    if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
        phrase[0] = phrase[0] - 32;
    }
}