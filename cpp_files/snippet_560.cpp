void Capitalise(char *phrase){

    int i;
    for(i = 0; phrase[i]; i++){

        if ((i == 0) && ((phrase[i] >= 'a' && phrase[i] <= 'z'))){
           phrase[i] = phrase[i] - 32;
        } else if (((phrase[i - 1] == ' ') && (phrase[i] > 1)) && ((phrase[i] >= 'a' && phrase[i] <= 'z'))){
           phrase[i] = phrase[i] - 32;
        }
    }
}