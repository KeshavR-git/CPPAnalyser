void Capitalise(char* phrase) {
    if (phrase[0] < 123 && phrase[0] > 96)
        phrase[0] = phrase[0] - 32;
    int i;
    for (i = 0; i <= (strlen(phrase) - 1); i++)
        if (phrase[i] == 32)
            if (phrase[i + 1] < 123 && phrase[i + 1] > 96)
                phrase[i + 1] = phrase[i + 1] - 32;
}