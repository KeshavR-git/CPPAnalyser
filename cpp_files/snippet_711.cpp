void Capitalise(char* phrase) {

	// This function distinguishes all the seperate 'words' and capitalises the first letter or each.
	// Find all the spaces and capitalise the first letter after them.
	int i, length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if (i == 0) { // check if the first character is a lowercase letter 
		// Convert the selected character into its Capital equivalent
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {  // Check that the character lies between 'a' and 'z' - the lowercase letters
				phrase[i] = phrase[i] - 32;    /// subtracting 32 makes it a capital
			}
		}
		else if (phrase[i] == ' ') { // if the character is a space no change will happen
			i++;
			// Check that the next selected character is a lowercase 
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {  // Check that the character lies between 'a' and 'z' - the lowercase letters
				phrase[i] = phrase[i] - 32;    /// subtracting 32 makes it a capital
			}
		}
		else {
		}
	}
}