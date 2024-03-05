void MakeCap(char *phrase, int pos);
int MyStrLen(char *string);
void Capitalise(char *phrase)
{
    int length;
    length = MyStrLen(phrase);
    int i;
    MakeCap(phrase, 0);
    for (i = 0;i < length; i++) {
        if (phrase[i]==' '){
            MakeCap(phrase, i+1);
        }
    }
}
int MyStrLen(char *string)
{
    int i = 0;
    while (string[i] != '\0'){
        i++;
    }
    return i;
}
void MakeCap(char *phrase, int pos)
{
    if (phrase[pos] >= 97 && phrase[pos] <= 122){
        phrase[pos] = (char)(phrase[pos]-('a' - 'A'));
    }
}