void Capitalise(char *phrase)
{
    int index = 0;
    int length = 0;
    int spaceindex = 0;
    int spaces[100];
    // length of sentence array
    while (phrase[index] != 0)
    {
        length++;
        index++;
    }
    // positions of spaces
    for(int i = 0;i<length;i++)
    {
        if (phrase[i] == ' '){
            spaces[spaceindex] = i;
            spaceindex++;
        }
    }
    // updating alphabets
    // checking first positions
    if (phrase[0] >= 97 && phrase[0] <= 122) 
    {
       phrase[0] = phrase[0] - 32; 
    }
    // checking all other values
    for (int i=0;i<spaceindex;i++)
    {
        if (phrase[spaces[i]+1] >= 97 && phrase[spaces[i]+1] <= 122)
        {
            (phrase[spaces[i]+1]) = (phrase[spaces[i]+1]) - 32;
        }
    }
}