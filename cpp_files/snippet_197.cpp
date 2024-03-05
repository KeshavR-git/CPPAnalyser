int Between(char *phrase, int pos)
{
    int is = 0;
    if ((phrase[pos] >= 'a') && (phrase[pos] <= 'z'))
    {
        {
            is = 1;
        }
    }
    return is;
}

void Capitalise(char *phrase)
{
    int i, j = 0;
    while (phrase[j] != '\0')
    {
        j++;
    }

    if (Between(phrase, 0))
    {
        {
            phrase[0] = phrase[0] - 32;
        }
    }

    for (i = 0; i < j; i++)
    {
        if (phrase[i - 1] == ' ')
            if (Between(phrase, i))
            {
                {
                    phrase[i] = phrase[i] - 32;
                }
            }
    }
}