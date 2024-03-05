void Capitalise(char *phrase)
{
    int i;
    if (isalpha(phrase[0]))
    {
        phrase[0] = toupper(phrase[0]);
    }
    for (i = 0; i < strlen(phrase);i++)
    {
        if (isspace(phrase[i]))
        {
            if (isalpha(phrase[i+1]))
            {
                phrase[i+1] = toupper(phrase[i+1]);
            }
        }

    }
}