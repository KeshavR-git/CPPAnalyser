void Capitalise(char *phrase)
{
	// Initialisng variables
	int i = 0;
	int length = 0;

	// Finding length of phrase
	while (phrase[length] != '\0') {
		length++;
	}

	// Going through each character in the phrase
	for (i = 0; i < length; i++) {

		// If space character present, and if character infront of space is lowercase, make it uppercase
		if (phrase[i] == ' ') {
			if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
				phrase[i + 1] = toupper(phrase[i + 1]);
			}
		}
		
		// If first letter in phrase is lowercase, make it uppercase
		else if (phrase[i] >= 'a' && phrase[i] <= 'z' && i == 0) {
			phrase[i] = toupper(phrase[i]);
		}

	}
}