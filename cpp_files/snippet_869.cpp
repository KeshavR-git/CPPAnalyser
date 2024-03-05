void Capitalise(char *phrase)
{
    
    int len = strlen(phrase);
    
    // Check for 1st Character...
    int firstCharInWord = 0;

    if (phrase[0] != 32)
        firstCharInWord = 1;
    
    // Scan for word sperated by space
    for (int index = 0; index < len; index++) 
    {
        if (( firstCharInWord ) && (phrase[index] != 32))
        {
            // try converting... 
            if (phrase[index] >= 97 && phrase[index] <= 122)
                phrase[index] -= 32;
            firstCharInWord = 0;
        }
        else 
        {
            if (phrase[index] == 32)
                firstCharInWord = 1;
        }
    }
    return;
}