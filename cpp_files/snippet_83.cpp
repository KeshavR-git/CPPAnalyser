void Capitalise(char *phrase)
{
	// Initialising variables
	int i;

	// Calculating the length of the string
	int length = strlen(phrase);

	// Cycling through the phrase
	for(i = 0; i <= length; i++) {
		// Captialising the first letter
		if (i == 0) {
			// Checking if it is a lowercase letter
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32; // Changing the case to an upper case
			}
		} else if (phrase[i - 1] == ' ') {
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}