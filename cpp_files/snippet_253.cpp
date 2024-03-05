void Capitalise(char *phrase)
{
    int index;
    int length;

    length = strlen(phrase);

    for (index = 0; index < length; index = index + 1)
    {
        if ((phrase[index] > 96) && (phrase[index] < 123))
        {
            if ((phrase[index] > 64) && ((phrase[index - 1] == 32) || ((phrase[0] > 96) && (phrase[0] < 123))))
            {
                phrase[index] = (char)((int)phrase[index] - 32);
            }

            else
            {
                phrase[index] = phrase[index];
            }
        }
    }
}