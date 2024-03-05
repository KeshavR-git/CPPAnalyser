void Capitalise(char *phrase)
{
    void MakeCap(char *phrase, int pos);
    int i = 0;
    //loop through if char equals a space, then the following char equals the capital of that letter 
    while (phrase[i] != '\0') {
        if (phrase[i] == ' ' ){
            MakeCap(phrase, (i+1));
        }
        i++;
    }
    MakeCap(phrase, 0);
}

void MakeCap(char *phrase, int pos)
{
    if (phrase[pos] >= 97 && phrase[pos] <=122) {
        phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
    }
}