void Capitalise(char *phrase)
{
    int i;
    int length = (strlen (phrase));
    for (i = 0; i < length; i++){
        if (phrase[i] == ' '){ 
            if ((phrase[i+1]>=97)&&(phrase[i+1]<=122)){
            phrase[i+1] = phrase[i+1] - ('a'-'A');
        }
        }
        if (i == 0){
            if ((phrase[i]>=97)&&(phrase[i]<=122)){
            phrase[i] = phrase[i] - ('a'-'A');
        }   
        }
    }
}