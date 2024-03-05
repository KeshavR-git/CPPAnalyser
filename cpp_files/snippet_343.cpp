void Capitalise(char* phrase) {
	int i, letter;
	int length = strlen(phrase);

	for (i = 0; i <= length; i = i + 1) {
		if (phrase[i] == 32) {
			letter = phrase[i + 1];
			if (letter >= 97 && letter <= 122) {
				phrase[i + 1] = letter - 32;
			}
		}
	}

	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = phrase[0] - 32;
	}

	return;
}