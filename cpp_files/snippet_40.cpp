void Capitalise(char *phrase){
    int i = 0;
    int reset = 0;

    while(phrase[i] != 0){
        if(reset == 0 && phrase[i] != ' ' && phrase[i] > 96){
            phrase[i] -= 32;
            reset = 1;
            i++;
        }
        else if(phrase[i] < 96 && phrase[i] != ' '){
            reset = 1;
            i++;
        }
        else if(reset == 1 && phrase[i] == ' '){
            reset = 0;
            i++;
        }
        else{
            i++;
        }
    }
}