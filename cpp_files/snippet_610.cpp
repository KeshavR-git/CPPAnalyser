void Capitalise(char *phrase)
{
    int i;
    char space = ' ';
    phrase[0] = toupper(phrase[0]);
    for(i=0; i<strlen(phrase); i++)
    {
        if(phrase[i] == space)
        {
            phrase[i+1] = toupper(phrase[i+1]);
        }
    }
}