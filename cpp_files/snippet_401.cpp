void CapitaliseOne(char* word, int index)
{
    //Check if the word falls between the ASCII numbers for lowercase letters
    if ((word[index] >= 97) && (word[index] <= 122))
    {
        //Convert the letter to capital
        word[index] = word[index] - 32;
    }
}

void Capitalise(char* phrase)
{
    //Initialise variables
    int i;

    //Set the first letter to capital
    CapitaliseOne(phrase, 0);

    //Cycle through the phrase
    for (i = 1; phrase[i] != '\0'; i++)
    {
        //Search for spaces
        if (phrase[i] == 32)
        {
            //Feed the next letter to CapitaliseOne
            CapitaliseOne(phrase, i + 1);
        }
    }
}