void Capitalise(char *phrase){
    int i;
    int length = (strlen(phrase))-1;
    



    for (i=0; i<=length; i++){
        
        if(i == 0){
           phrase[i] = toupper(phrase[i]);
        
        }

        else if (phrase[i-1] == ' '){
            phrase[i] = toupper(phrase[i]);
        }
    }
}