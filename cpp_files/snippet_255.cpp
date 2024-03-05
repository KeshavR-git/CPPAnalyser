void Capitalise(char*phrase)
{
    int i;
    int wordlength;
    char space;
    space = 32;
    
    wordlength = strlen(phrase);
    
    for (i = 0; i < wordlength; i++){
        if (phrase[i] == space){
            phrase[i+1] = toupper(phrase[i+1]);
            } else if (i == 0){
            phrase[i] = toupper(phrase[i]);
        } else
        continue;
    }
}