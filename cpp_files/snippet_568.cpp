void Capitalise(char *phrase)
{
    size_t length = strlen(phrase);
    for (int i = 0; i < length; i++){
        if (phrase[i] >= 97 && phrase[i] <= 122 && (i == 0 || phrase[i-1] == 32)){
            phrase[i] -= 32;
        }
    }
}