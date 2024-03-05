void Capitalise(char *phrase){
    int i = 1;
    if((phrase[0] <= 122) && (phrase[0] >= 97)){
        phrase[0] = phrase[0] - 32;
    }
    while (phrase[i] != '\0'){
        if (phrase[i-1] == ' '){
            if((phrase[i] <= 122) && (phrase[i] >= 97)){
                phrase[i] = phrase[i] - 32;
            }
        }
        i++;
    }
}