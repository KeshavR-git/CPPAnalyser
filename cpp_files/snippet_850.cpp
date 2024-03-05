void Capitalise(char* phrase)
{
    int i;
    int x;
    x = strlen(phrase);
    for (i = 0; i < x; i++) {
        if ((phrase[i - 1] == ' ') && (phrase[i] >= 'a') && (phrase[i] <= 'z'))
        {
            phrase[i] = phrase[i] - 32;
        }
    }
    for (i = 0; i < x; i++) {
        if ((i == 0) && (phrase[i] >= 'a') && (phrase[i] <= 'z'))
        {
            phrase[i] = phrase[i] - 32;
        }

    }
}