void Capitalise(char *phrase){
    int i, length;
    i = 0;
    while (phrase[i] != '\0'){
        length = i;
        i++;
    }
    for (i = 1; i <= length; i++){
        if ((phrase[i] >= 97) && (phrase[i] <= 122)){
            if (phrase[i-1] == 32){
                phrase[i] = phrase[i] - 32;
            }
        }
    }
    if ((phrase[0] >= 97) && (phrase[0] <= 122)){
        phrase[0] = phrase[0] - 32;
    }
}