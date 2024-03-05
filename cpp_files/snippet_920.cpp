void Capitalise(char *phrase){
    int i;
    int toupper(int phrase);
    
    for (i=0; i<(strlen(phrase)); i++) {
        phrase[0] = toupper(phrase[0]);
        if (phrase[i] && phrase[i-1] == ' ') {
            phrase[i] = toupper(phrase[i]);
            
        }
        
    }
}