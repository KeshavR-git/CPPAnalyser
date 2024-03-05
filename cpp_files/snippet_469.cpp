void Capital(char *phrase,int n){

    if ((phrase[n] >= 97) && (phrase[n] <= 122)){
        phrase[n] = phrase[n] - 32;
    }
}

void Capitalise(char *phrase){

    int i;
    int length = strlen(phrase);

    //First letter of string
    Capital(phrase, 0);

    //Rest of string after spaces
    for (i = 0; i <= length; i++){
        if (phrase[i] == 32){
            Capital(phrase, (i+1));
        }
    }
}