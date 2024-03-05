void Capitalise(char *phrase)
{
    int i;
    if (phrase[0] >= 97 && phrase[0] <= 122) 
    {
        phrase[0] = (char)(phrase[0] - ('a' - 'A'));
    }
    int length = strlen(phrase);
    for (i = 0; i < length; i++)
    {
        if (phrase[i] == ' ')
        {
            if (phrase[i + 1] != ' ')
            {
                if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) 
                {
                    phrase[i + 1] = (char)(phrase[i + 1] - ('a' - 'A'));
                }
            }
        }
    }
     
}