void Capitalise(char *phrase){
    int i=0;
    while (phrase[i] != '\0') {
        if ((i==0) || (phrase[i-1]== ' ')){
            if(phrase[i]>='a' && phrase[i]<='z') {
                phrase[i] = 'A' + (phrase[i] - 'a'); 
             }
        }
    i++;
    }
}