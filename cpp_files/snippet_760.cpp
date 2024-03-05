void Capitalise(char *phrase) {
    
    int i = 0;
    phrase[i] = toupper(phrase[i]);
    
    for (i = 1; i < 100; i++) {

        // If character follows null character and is a lowercase letter, capitalise it
        if (phrase[i-1] == ' ') {
            phrase[i] = toupper(phrase[i]);
        }
    }
}