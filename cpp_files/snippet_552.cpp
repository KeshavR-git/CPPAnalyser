void Capitalise(char* phrase)
{   
    int i, j;
    char low[26] = "abcdefghijklmnopqrstuvwxyz";
        char cap[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int alength = strlen(low);
    int length = strlen(phrase);

    for (i = 0; i < length; i++) {
        for (j = 0; j < alength; j++){
            if ((phrase[i] == ' ') && (phrase[i + 1] == low[j])) {
                phrase[i + 1] = cap[j];
            }
            else if (phrase[0] == low[j]) {
                phrase[0] = cap[j];
            }
        }
    }
}