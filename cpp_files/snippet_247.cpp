// Capitalise Every Word In A Sentace
void Capitalise(char* phrase) {
	int i = 0;
	bool cap = 1;
	while (phrase[i] != '\0') { // While within string
		int letter = phrase[i]; // Get ASCII value
		if (cap & (letter >= 97) & (letter <= 122)) // If following a space, and a lower case
			phrase[i] = letter - 32; // Change to capatal
		if (phrase[i] == ' ') // Check if space
			cap = 1; // Next word can be cap
		else
			cap = 0; // Next word can't be cap
		i++;
	}
}