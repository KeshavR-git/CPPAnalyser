//Author: Mat Nicholls
//Purpose: Capitalise all first characters in words
//Input: phrase
//Output: Capitalised phrase
void Capitalise(char *phrase)
{
    int len, i;
    //determine length of phrase
    len = strlen(phrase) - 1;
    
    //check if first character should be Capitalised
    if ((phrase[0] >= 97) && (phrase[0]<= 122)){
        //alter ascii value to that of capital
        phrase[0] = phrase[0] - 32;
    }
    //loop through phase, checking if character before is a space and if variable is a-z using ascii values
    for (i=1; i<=len; i++){
        if ((phrase[i - 1] == ' ') && ((phrase[i] >= 97) && (phrase[i]<= 122))){
            //alter ascii value to that of capital
            phrase[i] = phrase[i] - 32;
        }
    }
}