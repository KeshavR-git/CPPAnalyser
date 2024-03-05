void Capitalise(char *phrase)
{
    int i = 0;
    int length = 0;
    if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
        phrase[i] = phrase[i] - ('a' - 'A');
    }
    while (phrase[length] != '\0') {
        length = length + 1;
    }
    for (i = 1; i < (length - 1); i++) {
        if ((phrase[i] == 32) && ((phrase[i+1] >= 97) && (phrase[i+1] <= 122))) {
            phrase[i+1] = phrase[i+1] - ('a' - 'A');
        }
    }
}