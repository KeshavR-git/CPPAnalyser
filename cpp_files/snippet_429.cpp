void Capitalise(char *phrase) {
	int i = 0;
	int j = 0;

	// get the length of the phrase. j is the number of characters in the phrase.
	while (phrase[j] != 0) {
		j++;
	}

	// for loop will go through all characters in the phrase.
	// if loop will check if the character we are looking at needs to be capitalised, then will capitalise the character.
	for (i = 0; i < j; i++){
		if (((phrase[i - 1] == ' ') || (i == 0)) && (phrase[i] > 96) && (phrase[i] < 123)) {
			phrase[i] = phrase[i] - 32;
		}
	}

}