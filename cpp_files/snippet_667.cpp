void MakeCapital (char *phrase, int index)
{
    if (phrase[index] >= 97 && phrase[index] <= 122) {
        phrase[index] -= 32;
    }
}

void Capitalise(char *phrase)
{
    int i;

    MakeCapital(phrase, 0);

    for (i = 0; phrase[i] != '\0'; i++) {
        if (phrase[i] == 32 && phrase[i + 1] != 32) {
            MakeCapital(phrase, (i + 1));
        }
    }
}