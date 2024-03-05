void CapitaliseLetter(char *letter){
    if ((int)*letter <= 122 && (int)*letter >= 97){
        *letter -= 32;
    }
}

void Capitalise(char *phrase){
    CapitaliseLetter(&phrase[0]);
    int stringLength = strlen(phrase);
    for(int i = 1; i < stringLength; i++){
        if(phrase[i - 1] == 32){
            CapitaliseLetter(&phrase[i]);
        }
        
    }
}