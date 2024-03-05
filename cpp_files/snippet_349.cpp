void Capitalise(char *phrase)
{
    if (phrase[0] >= 97 && phrase[0] <= 122) {
        phrase[0] = phrase[0] - 32;
    }
    
    int i = 1;
    while (i < 1000) {
        if (phrase[i-1] == ' ' && phrase[i] >= 97 && phrase[i] <= 122) {
            phrase[i] = phrase[i] - 32;
        }
        i++;
    }
    return;
    
}