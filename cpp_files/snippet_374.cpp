int upper(char lowercase);

void Capitalise(char *phrase)
{
    int i;
    char uppercase;
    int length = strlen(phrase);
    for (i=0; i<length; i++){
        if (i==0) {
            uppercase = upper(phrase[i]);
            phrase[i] = uppercase;
        }
        else if (phrase[i-1]==' '){
            uppercase = upper(phrase[i]);
            phrase[i] = uppercase;
        }
    }
}

int upper(char lowercase)
{
    char uppercase = lowercase;
    if (lowercase>='a' && lowercase<='z'){
        uppercase = lowercase-32;
    }
    return uppercase;
}