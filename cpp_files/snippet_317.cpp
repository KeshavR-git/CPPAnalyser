void Capitalise(char *phrase) {
    int i = 0;
    // cycles through phrase and finds all spaces
    while (phrase[i] != '\0') {
        
        // if lowercase, change to uppercase
        if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
            
            // the letter after the space is capitalised
            if (phrase[i-1] == 32) {
            phrase[i] = phrase[i] - 32;
            }
            // the first letter is capitalised
            if (i == 0) {
            phrase[0] = phrase[0] -32;
            }
        }
        
		i++;
	}
}