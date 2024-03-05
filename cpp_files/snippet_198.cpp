void Capitalise(char*phrase)
{
    int i, length;
    char space=32;

    length=strlen(phrase);

    for (i=0;i<length;i++){
        if (i==0){
            phrase[i]=toupper(phrase[i]);
        } else if (phrase[i]==space){
            phrase[i+1]=toupper(phrase[i+1]);
        } else
        continue;
    }
}