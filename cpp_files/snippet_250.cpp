void Capitalise(char *phrase)
{
const int sizeofstring = strlen(phrase);
int i;
for (i = 0; i < sizeofstring; i++){
    if (phrase[i] >= 97){
        if (i == 0){
            phrase[i] = phrase[i] - 32;
        }
        else if (phrase[i - 1] == 32){
            phrase[i] = phrase[i] - 32;
        }
    }
}
}