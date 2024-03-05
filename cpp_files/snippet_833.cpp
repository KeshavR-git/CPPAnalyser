void Capitalise(char *phrase){
    int character;
    for (int i=0;i<strlen(phrase);i++){
        character = phrase[i];
        if (character >=97 && character <=122 && ((int)phrase[i-1] == 32 || i == 0)){
            phrase[i] = character - 32;
        }
    }
}