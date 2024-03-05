void Capitalise(char *phrase) {
    int i = 0;
    if (phrase[0] >= 97 && phrase[0] <= 122) {
        phrase[0] -= 32;
    }
    while (phrase[i] != '\0') {
        if (phrase[i] != ' ' && phrase[i-1] == ' ') {
            if (phrase[i] >= 97 && phrase[i] <= 122) {
                phrase[i] -= 32;
            }
        }
        i++;
    }
}