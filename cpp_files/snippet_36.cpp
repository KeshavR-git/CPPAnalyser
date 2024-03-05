// The helper function will captialise a single letter within the given phrase
void SingleCap(char *phrase, int letter) {

	// Checks if the letter in the phrase is within the range of 'a' to 'z' based of ASCII values
	if (phrase[letter] <= 122 && phrase[letter] >= 97){

		// Converts the lowercase letter to its uppercase equivalent
		phrase[letter] -= 32;
	}
}

// This function will capitalise the first character in each word in the phrase
void Capitalise(char* phrase) {

	int i = 0;
	while (phrase[i] != '\0') {

		// Consider the first letter in the entire phrase
		if (i == 0) {
			// Calls the helper function
			SingleCap(phrase, i);
		}

		// Considers the other letters in the phrase
		else if(phrase[i] == ' ' && phrase[i + 1] != ' ') {
			// Calls the helper function
			SingleCap(phrase, i + 1);
		}
		i++;
	}
}