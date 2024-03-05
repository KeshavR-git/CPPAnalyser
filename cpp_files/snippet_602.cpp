void Capitalise(char *phrase)
{
    int aftSpace = 1;
    int i;
    for (i = 0; i < strlen(phrase); i++)
    {
        if ((int)phrase[i] == 32)
        {
            aftSpace = 1;
        }
        else if ((65 <= (int)phrase[i]) && ((int)phrase[i] <= 90) && (aftSpace == 1))
        {
            aftSpace = 0;
        }
        else if ((97 <= (int)phrase[i]) && ((int)phrase[i] <= 122) && (aftSpace == 1))
        {
            phrase[i] = (char)((int)phrase[i] - 32);
            aftSpace = 0;
        }
    }
}