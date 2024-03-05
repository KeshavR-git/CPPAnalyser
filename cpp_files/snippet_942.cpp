void CapLetter(char *phrase, int indexNum) {

	phrase[indexNum] = phrase[indexNum] - 32;

}

void Capitalise(char *phrase) {

	int i = 0;
	int previous;

	while (phrase[i] != '\0') {
		if (i == 0) {
			previous = 0;
		} else {
			previous = phrase[(i - 1)];
		}

		if (i == 0) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				CapLetter(phrase, i);
			}
		}

		if (previous == 32) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				CapLetter(phrase, i);
			}
		}

		i++;
	}

}