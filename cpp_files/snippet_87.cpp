char upper(char letter) {
	if ('a' <= letter && letter <= 'z') {
		letter = letter - 32; //  because 'a' - 'A' == 32
	}
	
	return letter;
}

void Capitalise(char *phrase) {	
	// Capitalise first character
	phrase[0] = upper(phrase[0]);
	
	// Process remaining characters
	for (int i = 1; i < strlen(phrase); i++) {
		if (phrase[i - 1] == ' ') {
			phrase[i] = upper(phrase[i]);
		}
	}
}