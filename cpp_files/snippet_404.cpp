char upper(char letter)
{
    letter = letter -32;
    return letter;
}

void Capitalise(char phrase[1000])
{
    int i=0;
    
    if (islower(phrase[i]))
    {
        phrase[i] = upper(phrase[i]);
    }

    for (i = 0; i< strlen(phrase); i++)
    {
        if (phrase[i] == 32 && islower(phrase[i+1]))
        {
            phrase[i+1] = upper(phrase[i+1]);
        }
    }
}