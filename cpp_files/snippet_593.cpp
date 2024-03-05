void Capitalise(char *phrase)
{
    for (int i = 0; i < strlen(phrase); i++) {
        if ((phrase[i] >= 97) && (phrase[i] <= 122) && (phrase[i-1] < 45)) {
            phrase[i] = phrase[i] - 32;
        }
    } 
}