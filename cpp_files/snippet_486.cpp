void Capitalise(char *phrase)
{
    int length = strlen(phrase);
    int i;
    for (i=0; i<length; i++)
    {
        if (i==0 && 96<phrase[0] && phrase[0]<123)
        {
            phrase[0] = phrase[0] - 32;    
        }     
        else if (i>0 && 96<phrase[i] && phrase[i]<123)
        {
            if (phrase[i-1] == 32)
            {
                phrase[i] = phrase[i] - 32;
            }
        }
    }
}