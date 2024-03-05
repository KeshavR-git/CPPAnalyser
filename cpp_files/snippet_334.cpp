void Capitalise(char *phrase) {
    int length = 0;
    int i;
    while (phrase[length] != '\0') {
    length++;
    }
    
    for (i = 0;i<length;i++){
        if ((i==0)||(phrase[i-1] == 32)){
            if ((97<=phrase[i])&&(phrase[i]<=122)){
                phrase[i] = phrase[i]-32;
            }
        }
    }
}