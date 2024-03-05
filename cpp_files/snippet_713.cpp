void Capitalise(char *phrase) 
{

    int i;

    // capitalise the first letter of each word in the string
    for(i = 0; phrase[i] != '\0'; i++) 
    {
        if(i == 0)
        {
            if((phrase[i] >= 'a'&& phrase[i] <= 'z'))
                phrase[i] = phrase[i]-32; //subtract 32 to get the uppercase letter
            continue;
        }
        if(phrase[i] == ' ')// check for space between characters
        {
            // if a space is found increment by 1
            ++i;
            //check next character is lowercase
            if((phrase[i] >= 'a'&& phrase[i] <= 'z'))
            {
                 phrase[i] = phrase[i]-32;
                 continue; 
            }
        }
        else
        {
            // if there is characters other than letters uppercase or lowercase. leave as is
            if(phrase[i] < 'A' && phrase[i] > 'Z')
        {
            i++;
        }
        }
    }
}