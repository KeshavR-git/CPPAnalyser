void Capitalise(char *phrase)
{
    int Length = strlen(phrase);
    int i;
    char ch;
    for(i=0;i<Length;i++)
    {
        if(phrase[0]>='a'&& phrase[0]<='z')
        {
            ch = phrase[0];
            phrase[0] = toupper(ch);
        }
        if(phrase[i] == ' ' && phrase[i+1]>='a' && phrase[i+1]<='z')
        {
            ch = phrase[i+1];
            phrase[i+1] = toupper(ch);
        }

    }
}