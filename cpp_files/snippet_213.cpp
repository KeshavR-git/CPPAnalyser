void Capitalise(char* phrase) 
{
    if ((phrase[0] >= 97) && (phrase[0] <=122)) {
        phrase[0] -= 32;
    }
    
    for (int i = 1; i < strlen(phrase); i++) {
        if ((phrase[i-1] == ' ') && ((phrase[i] >= 97) && (phrase[i]<=122))) {
            phrase[i] -= 32;
        }
    }
    return;
}