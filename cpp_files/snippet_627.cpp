void Capitalise(char *phrase)
{
    int i;
    for (i = 0; phrase[i] != '\0'; i++)
    {

        if (i == 0)
        {
            if ((phrase[i] >= 97 && phrase[i] <= 122))
                phrase[i] = phrase[i] - 32;
            continue; 
        }
        if (phrase[i] == ' ')
        {

            ++i;

            if (phrase[i] >= 97 && phrase[i] <= 122)
            {
                phrase[i] = phrase[i] - 32; 
                continue; 
            }
        }
        else
        {

            if (phrase[i] >= 65 && phrase[i] <= 90 )
                phrase[i] = phrase[i] + 32; 
        }
    }
}