void Capitalise(char *phrase){
    int i;
    int intValue;
    for (i = 0; i < strlen(phrase); i++){
        intValue = (int)phrase[i];
        if (((i == 0) && ((intValue >= 97) && (intValue <= 122))) || ((phrase[i - 1] == ' ') && ((intValue >= 97) && (intValue <= 122)))){
            intValue = intValue - 32;
            phrase[i] = (char)intValue;
        }
    }
}