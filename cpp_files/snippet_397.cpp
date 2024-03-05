void Capitalise(char *phrase)
{
    int i=0;
    if(phrase[i]>=97 && phrase[i]<=122)
    {
        phrase[i]= phrase[i]-32;
    }

    while(phrase[i] != '\0')
    {
        if(phrase[i] == ' '  && phrase[i+1]>=97 && phrase[i+1]<=122)
        {
            phrase[i+1] = phrase[i+1] - 32;
        }
        i++;
    }
}