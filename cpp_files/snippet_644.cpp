void Capitalise(char *phrase)
{
    int i;
    for (i = 0; phrase[i] != '\0'; i++)
    {
        if ((phrase[i] >= 'a' && phrase[i] <= 'z') && (phrase[i - 1] == ' ' || phrase[i - 1] == 0))
        {
            phrase[i] = phrase[i] - 32;
        }
    }
}