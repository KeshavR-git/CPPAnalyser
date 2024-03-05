void Capitalise(char *phrase){
    phrase[0] -= (phrase[0] < 91 ? 0 : 32);
    int length = strlen(phrase);
    for(int i = 0; i<length-1;i++){
        if(phrase[i] == 32 && phrase[i+1] >91){
            phrase[i+1]=phrase[i+1]-32;
        }
    }
}