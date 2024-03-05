void Cap(char *phrase, int p)
{
    if (phrase[p] >= 97 && phrase[p] <= 122) {
        phrase[p] = (char)(phrase[p] - ('a' - 'A'));
    }
}

void Capitalise(char *phrase)
{ 
    int i = 0;
    while (phrase[i] != '\0') {
        if (i == 0) {
            Cap(phrase, 0);
        } else if (phrase[i-1] == ' ') {
            Cap(phrase, i);
        }
        i++;
    }

}