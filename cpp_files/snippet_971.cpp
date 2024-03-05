int Reverse(char letter)
{
    int number = letter; 
    char newnum;


    if ((number >= 97) && (number <= 122))
    {
       newnum = number - 32;
        
    }

    else 
    {
        newnum = number;
    }
    

    return newnum;

}

void Capitalise(char *phrase)
{
    int length = strlen(phrase);
    int i;

    for (i=0; i<length; )
    {
        if (i==0)
        {
            phrase[i]= Reverse(phrase[i]);
        }
        if (phrase[i] == ' ')
        {
            phrase[i+1]= Reverse(phrase[i+1]);
        }

        i++;
    }
}