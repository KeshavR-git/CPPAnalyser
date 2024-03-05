void Capitalise(char* phrase);
char upperCase(char letter);

void Capitalise(char* phrase) {
	
	// Get length of phrase.
	int length = strlen(phrase);

	// Find position of first letter of genuine words (not numbers / special characters)
	
	int i;
	for (i = 0; i < length; i++) {
		
		if (i == 0) {
			if (phrase[i] > 96 && phrase[i] < 123)
				phrase[i] = upperCase(phrase[i]);
		}
		else {
			if (phrase[i - 1] == 32) {
				if (phrase[i] > 96 && phrase[i] < 123)
					phrase[i] = upperCase(phrase[i]);
			}
		}
	}


	//Capitalise first letter of each word
	


}

char upperCase(char letter) {
	letter -= 32;
	return letter;
}