void Capitalise(char *phrase)
{
    int len;
    len = strlen(phrase);

    for (int i = 0; i < len; i++)
    {
        if (i == 0) 
        {
           phrase[i] = toupper(phrase[i]);
        }
        else if (phrase[i] == ' ')
        {
            phrase[i + 1] = toupper(phrase[i + 1]);

        }
    }


}