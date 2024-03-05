void Capitalise(char* phrase) {
	int length = 0;
	while (phrase[length] != '\0') {
		length++;
	}

	int i, capitalise = 1;
	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			capitalise = 1;
		}
		else if (capitalise && (phrase[i] > 96 && phrase[i] < 123)) {
			phrase[i] = phrase[i] - 32;
			capitalise = 0;
		}
		else {
			capitalise = 0;
		}
	}

}