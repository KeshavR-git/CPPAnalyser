void Capitalise(char *phrase)
{
    int i;
    int length;
    length = strlen(phrase);
    i = 0;
    if ((phrase[i] >= 97) && (phrase[i] <= 122))
    {
        phrase[i] = phrase[i] - 32;
    }

    for (i = 1; i < length; i++)
    {
        if ((phrase[i-1] == ' ') && (phrase[i] >= 97) && (phrase[i] <= 122))
        {
            phrase[i] = (phrase[i] - 32);
        }
    }
}