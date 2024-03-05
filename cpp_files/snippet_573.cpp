void Capitalise(char *phrase)
{
    int i, length;

    length = strlen(phrase);

    if(phrase[0] >='a' && phrase[0]<='z')
    {
        phrase[0] = phrase[0]-32;
    }

    for(i=0; i<length; i++)
    {
        if(phrase[i] == ' ')
        {
            if(phrase[i+1] >='a' && phrase[i+1]<='z')
            {
                phrase[i+1] = phrase[i+1] -32;
            }
        }
        else
        {
            continue;
        }
    }
}