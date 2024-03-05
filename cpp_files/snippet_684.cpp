void Capitalise(char* phrase) {
	int i;
	for (i = 0; i < strlen(phrase); i++) {
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] > 96) && (phrase[i + 1] < 123)) {
				phrase[i + 1] = phrase[i + 1] - 32;
			}

		}

	}
	if (phrase[0] != ' ') {
		if (phrase[0] > 96) {
			phrase[0] = phrase[0] - 32;

		}
		
	}

}