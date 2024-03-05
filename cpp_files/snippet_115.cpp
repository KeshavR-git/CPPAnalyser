void Capitalise(char* phrase) {
	int i, letter;

	/*Find the length of the string*/
	int length = strlen(phrase);

	for (i = 0; i <= length; i++) {
		if (phrase[i] == 32) {
			/*Extracting chatacter after the space */
			letter = phrase[i + 1];
			/*Check if the letter is between a-z*/
			if (letter >= 97 && letter <= 122) {
				/*Convert to capital equivalent*/
				phrase[i + 1] = letter-32;
			}
		}
	}

	/*Cap first letter */
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = phrase[0] - 32;
	}

	return;
}