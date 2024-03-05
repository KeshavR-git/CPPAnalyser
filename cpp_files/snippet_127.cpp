void Capitalise(char *phrase)
{
    int size = strlen(phrase);
    char temp[size];
    strcpy(temp, phrase);
    phrase[0] = ((phrase[0] >= 97) && (phrase[0] <= 122)) ? phrase[0] - 32 : phrase[0];
    for (int i = 0; i <= size - 1; i++)
    {
        if (phrase[i + 1] <= 122 && phrase[i + 1] >= 97)
        {
            phrase[i + 1] = (phrase[i] == ' ') ? phrase[i + 1] - 32 : phrase[i + 1];
        }
    }
}