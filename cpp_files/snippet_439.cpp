void Capitalise(char *phrase){
    //convert lowercase to uppercase -32
    // lowercase range 97-122
    int i = 0;
    while(phrase[i]!=0){
        if((i == 0 || phrase[i-1] == ' ') && phrase[i] >= 97 && phrase[i] <= 122){
            phrase[i] = phrase[i] - 32;
        }
        i++;
    }
}