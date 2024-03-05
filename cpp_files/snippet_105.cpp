void Capitalise(char *phrase)
{
    int i = 0 , length;
    length = strlen(phrase);
    if(phrase[i] >= 97 && phrase[i] <= 122)
        phrase[i] = (char) (phrase[i] - 32);
    for(i = 0; i < length ; i++){
        if(phrase[i] == ' '){
            if(phrase[i + 1] >= 97 && phrase[i + 1] <= 122)
                phrase[i + 1] =  (char) (phrase[i + 1] - 32);
        }
    }
}