void Capitalise(char *phrase){
    int ASCIIValue;
    int length = strlen(phrase);
    //Capitalise first word
    ASCIIValue = phrase[0];
    if (ASCIIValue >= 97){
        ASCIIValue -= 32;
        phrase[0] = (char)ASCIIValue;
    }
        
        
    //Capitalise all words inside the sentance
    for(int i = 0; i < length; i++){
        if(phrase[i] == ' '){
            ASCIIValue = (int)phrase[i + 1];
            if (ASCIIValue >= 97){
                ASCIIValue -= 32;
                phrase[i + 1] = (char)ASCIIValue;
            }
        }
    }
}