void Capitalise(char *phrase)
{
    int i;
    for (i = 0; i <= 1000; i++) {
        if (phrase[i] >= 97 && phrase[i] <= 122 && (phrase[i -1] == 32 || i == 0)) {
            phrase[i] = phrase[i] - ('a' - 'A');
        }
    }

}