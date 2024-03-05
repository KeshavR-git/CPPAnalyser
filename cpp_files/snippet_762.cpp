void Capitalise(char* phrase)
{
    int i;
    int cap = 1;

    i = 0;
    while (phrase[i] != '\0') {
        if (cap == 1) {
            if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
                phrase[i] = phrase[i] - 32;
            }
            cap = 0;
        }
        if ((cap == 0) && ((phrase[i] == 32) || (phrase[i] == '\t'))) {
            if ((phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
                cap = 1;
            }
        }
        i++;
    }
}