void Capitalise(char *phrase)
{
    int j = 0;
    while (phrase[j] != 0) {
        if (j == 0) {
            phrase[j] = toupper(phrase[j]);
        }
        if ((phrase[j - 1]) == 32) {
            phrase[j] = toupper(phrase[j]);
        }
        j++;
    }

}