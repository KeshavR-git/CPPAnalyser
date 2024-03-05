void Capitalise(char *phrase) {
    int index = 0;
    while (phrase[index] != '\0') {
        if ((index == 0 || phrase[index-1] == ' ') && phrase[index] > 96 && phrase[index] < 123) {
            phrase[index] -= 32;
        }
        index++;
    }
}