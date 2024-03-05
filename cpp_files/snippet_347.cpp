void Capitalise(char *phrase)
{
    if (phrase[0] != toupper(phrase[0])) {
        phrase[0] = toupper(phrase[0]);
    }
    int i;
    for (i = 0; i < strlen(phrase); i++) {
        if (phrase[i] == ' ') {
            if (phrase[i+1] != toupper(phrase[i+1])) {
                phrase[i+1] = toupper(phrase[i+1]);
            }
        }
    }
}