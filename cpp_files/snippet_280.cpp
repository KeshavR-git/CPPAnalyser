void Capitalise(char* phrase) {
	// Initialise variables
	int i = 1;

	// Check if first letter in the word is a lowercase letter
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		// Capitalise letter
		phrase[0] -= 32;
	}

	// Now use i to iterate through other variables
	while (phrase[i] != 0) {
		// Check if the character is in front of a space and if the character is a lowercase letter
		if ((phrase[i - 1] == 32) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			// The number 32 is the ASCII code for space, 97 is 'a', and 122 is 'z'
			// Capitalise letter
			phrase[i] -= 32;
		}

		i++;
	}
}