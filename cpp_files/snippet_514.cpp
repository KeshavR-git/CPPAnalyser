void Capitalise(char *phrase)
{

    int index,length;
    length = strlen(phrase);
    for (index = 0; index <= length; index++)
    {

        if ((index == 0 && phrase[index] >= 'a' && phrase[index] <= 'z'))
        {
            phrase[index] = phrase[index] - 32;
        }
        else if ((phrase[index] == ' ' && phrase[index + 1] >= 'a' && phrase[index + 1] <= 'z'))
        {
            phrase[index + 1] = phrase[index + 1] - 32;
        }
    }

}