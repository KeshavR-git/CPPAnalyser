void Capitalise (char *phrase){
    int i, length;
    length = 0;
    while (phrase[length] != '\0'){
        length++;
    }

    for ( i = 0; i < length; i++){
        
        if((i==0) && (phrase[i] >= 'a' && phrase[i] <= 'z')){
            phrase[i] = phrase[i] - 32;
        }
        if ((phrase[i]== ' ') && (phrase[i+1] >= 'a' && phrase[i+1] <= 'z')){
            phrase[i+1] = phrase[i+1] - 32;
        }
    }

}