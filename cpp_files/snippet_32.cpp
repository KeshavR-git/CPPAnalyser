void Capitalise(char *phrase){
    
    int i = 0;
    int length = strlen(phrase);
    
    while(i < length){
        //Value is already a capital letter
        if ((phrase[i] >= 97) && (phrase[i] <= 122)){
            if (i == 0){
                phrase[i] = phrase[i] - 32;
            }
            else if (phrase[i-1] == ' '){
                phrase[i] = phrase[i] - 32;
            }
        }
        i++;
    }
    return;
}