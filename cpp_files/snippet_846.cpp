void Capitalise(char* phrase)
{
    int i;

    for (i = 0; phrase[i]; i++)
    {
        if (i == 0) {
            if (phrase[i] >= 97 && phrase[i] <= 122)
                phrase[i] -= 32;

        }
        else if (phrase[i] == ' ') {
                if (phrase[i+1] >= 97 && phrase[i+1] <= 122)
                    phrase[i+1] -= 32;
            }
        }
}