void MakeCapital (char *phrase, int index);

void Capitalise(char *phrase)
{
    int i, limit;
    char space[] = " ";
    
    limit = strlen(phrase);
    MakeCapital(phrase, 0);
    
    
    for(i=0; i<limit; i++)
    {
        if(phrase[i]==space[0])
        {
            MakeCapital(phrase, (i+1));
        }
    }
    
}

void MakeCapital (char *phrase, int index)
{
    int asciiLetter, asciiCapital;
    char letter, capital;
    
    letter = phrase[index];
    asciiLetter = (int)letter;
    if(asciiLetter>96 && asciiLetter<123)
    {
    asciiCapital = asciiLetter-32;
    capital = (char)asciiCapital;
    phrase[index] = capital;
    }
}