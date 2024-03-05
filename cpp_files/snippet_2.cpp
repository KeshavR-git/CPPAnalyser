void UpdateCap(char *phrase, int pos) {
    if (phrase[pos] >= 97 && phrase[pos] <= 122) {
        phrase[pos] = (char) (phrase[pos] - ('a' - 'A'));
    }
}

// EXERCISE 3
void Capitalise(char *phrase) {
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            UpdateCap(phrase, 0);
        } else if (phrase[i - 1] == ' ') {
            UpdateCap(phrase, i);
        }
        i++;
    }
}