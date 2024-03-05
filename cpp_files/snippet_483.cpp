void upperAlphabet(char *letter){
    if (*letter > 96 && *letter < 123){
        *letter -= 32;
    }
}

void Capitalise(char *phrase){
    char *ptr = &phrase[0];
    int cap = 1;
    while (*ptr != '\0'){
        if (cap){
            upperAlphabet(ptr);
        }
        if (*ptr == 32){
            cap = 1;
        } else{
            cap = 0;
        }
        ptr++;
    }
}