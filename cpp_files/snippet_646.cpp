void Capitalise(char *phrase)
{
    int i;
    int length = strlen(phrase);
    for (i = 0; i < length; i++)
    {
        if (phrase[0] >= 'a' && phrase[0] <= 'z') // Capitalize first letter
        {
            phrase[0] = phrase[0] - 32;
        }
        if (phrase[i] >= 'a' && phrase[i] <= 'z' && phrase[i - 1] == ' ') // Capitalize the beginning letters of words
        {
            phrase[i] = phrase[i] - 32;
        }
    }
}