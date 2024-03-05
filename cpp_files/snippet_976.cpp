void Capitalise(char *phrase){
    int length = 0;
    while (phrase[length] != '\0'){
        if ((phrase[length] != ' ') && (phrase[length - 1] == ' ')){
            if ((phrase[length] >= 97) && (phrase[length] <= 122)){
                phrase[length] = phrase[length] - 32;
            }
        }
        length ++;
    }
    if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
        phrase[0] = phrase[0] - 32;
    }
}