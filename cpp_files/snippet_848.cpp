void Capitalise(char *phrase)
{
    int i;
    int x = strlen(phrase);
    for (i = 0; i < x; i++) {
        if ((i == 0) && (phrase[i] >= 97)) {
            phrase[i] = phrase[i] - ('a' - 'A');
        }
        else if ((phrase[i-1] == 32) && (phrase[i] >= 97)) {
            phrase[i] = phrase[i] - ('a' - 'A');
        }
}
}