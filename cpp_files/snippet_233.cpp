void Capitalise(char* phrase)
{
    int i;
    int length = strlen(phrase);
    
    for (i = 0; i < length; i++) {

        if ((i == 0) && ((phrase[i] >= 'a') && (phrase[i] <= 'z'))) {
            phrase[i] = phrase[i] - 32;
        }
        if (phrase[i] == ' ') {
            ++i;
            if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
                phrase[i] = phrase[i] - 32;
            }
            --i;
        }
    }
    return;
}