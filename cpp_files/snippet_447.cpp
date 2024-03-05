void Capitalise(char *phrase)
{

    int MAXLOWER = 122;
    int MINLOWER = 97;
    int ASCII = 32;

    int i = 0;

    while (phrase[i] != '\0')
    {

        if (i == 0)

        {
            if ((phrase[i] <= MAXLOWER) && (phrase[i] >= MINLOWER))

            {
                phrase[i] = phrase[i] - ASCII;
            }
        }
        else if ((phrase[i - 1] == ' ') && ((phrase[i] <= MAXLOWER) && (phrase[i] >= MINLOWER)))
        {

            phrase[i] = phrase[i] - ASCII;
        }
        i++;
    }
}