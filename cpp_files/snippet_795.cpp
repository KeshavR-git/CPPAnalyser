void Capitalise(char *phrase) {
    int isSpace = 1;
    int i = 0;
    while (phrase[i] != 0) {
        if (isSpace) {
            if (phrase[i] >= 97 && phrase[i] <= 122) {
                phrase[i] -= 32;
            }
            isSpace = 0;
        } else if (phrase[i] == 32) {
            isSpace = 1;
        }
        i++;
    }
}