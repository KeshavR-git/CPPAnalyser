void Capitalise(char *phrase)
{
    if (phrase[0] >= 97 && phrase[0] <= 122) {
        phrase[0] = (char)(phrase[0]-('a' - 'A'));
    }
    
    int i;
    for (i = 1; i < strlen(phrase); i++) {
        if (phrase[i] == ' ' && phrase[i+1] >= 97 && phrase[i+1] <= 122) {
            phrase[i+1] = (char)(phrase[i+1]-('a' - 'A'));
        }
    }
}