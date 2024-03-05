void Capitalise(char *phrase){
    int i;
    int length = strlen(phrase);
    
    for(i = 0; i < length; i++){
        //first check if the first character is a letter and then change to uppercase 
        if((phrase[0] > 96) && (phrase[0] < 123)) {
            phrase[0] = phrase[0] - 32;
        }
        
        if((phrase[i-1] == 32) && ((phrase[i] > 96) && (phrase[i] < 123))){
            phrase[i] = phrase[i] - 32;
        }
        
    }
}