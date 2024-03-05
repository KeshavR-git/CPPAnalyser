void Capitalise(char *phrase) {
    if (phrase[0] > 90) {
        phrase[0] -= 32;
    }
    
    for (int i = 1; phrase[i] != 0; i++) {
        if (phrase[i] == ' ' && phrase[i+1] > 90) {
            i++;
            phrase[i] -= 32;
        }
    }
}