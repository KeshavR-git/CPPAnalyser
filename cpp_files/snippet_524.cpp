void Capitalise(char *phrase)
{
    char *oogabooga = phrase;
    int i = 0;
    size_t length = strlen(oogabooga)-1;
    char x;
    x = ' ';

    for (i=0;i < length; i++)
    {
        if (oogabooga[i-1] == x && oogabooga[i] > 96)
        {
            oogabooga[i] = oogabooga[i]-32;
        }
    }
    if (oogabooga[0] > 96)
    {
        oogabooga[0] = oogabooga [0]-32;
    }

}