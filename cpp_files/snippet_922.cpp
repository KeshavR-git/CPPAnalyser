void Capitalise(char *phrase){
    int i;
    for (i=0; i<strlen(phrase); i++){
        if(phrase[i]>= 'a' && phrase[i]<= 'z'){
            if (i==0){
                phrase[i] = phrase[i] - 32;
            }
            if (phrase[i-1] ==' '){
                if (phrase[i]>= 'a' && phrase[i]<= 'z')
                    phrase[i] = phrase[i] - 32;
            }
        }
    }
}