void Capitalise(char *phrase)
{
    int i;
    int j;
    int length = strlen(phrase) - 1;
    
    phrase[0] = toupper(phrase[0]);
    
    for (i = 0; i <= length; i++) {
        if (phrase[i] == ' ') {
            j = i + 1;
            phrase[j] = toupper(phrase[j]);
        }
    }
}