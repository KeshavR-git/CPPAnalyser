void Capitalise(char *phrase)
{
    int length;
    int i;

    length = strlen(phrase);

    if ((phrase[0] >= 97) && (phrase[0] <= 122))
    {
        phrase[0] = phrase[0] - 32;
    }

    for (i=1;i<length;i++)
    {
        if ((phrase[i] >= 97) && (phrase[i] <= 122))
        {
            if (phrase[i-1] == ' ')
            {
                phrase[i] = phrase[i] - 32;
            }
        }
    }
}