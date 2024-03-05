void Capitalise(char *phrase)
{
    int i;
    int length = strlen(phrase);
    
    if ((phrase[0] >= 97) && phrase[0] <= 122) {
        phrase[0] = (char)(phrase[0] - 32);
    }
    
    for (i = 0; i < length; i++) {
        if (phrase[i] == ' ') {
            if ((phrase[i + 1] >= 97) && phrase[i + 1] <= 122) {
                phrase[i + 1] = (char)(phrase[i + 1] - 32);
            }
        }
    }
}