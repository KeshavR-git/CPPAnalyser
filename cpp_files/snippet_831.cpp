char singleLetter(char letter);
void Capitalise(char* phrase);

char singleLetter(char letter) {
		letter = letter - 32;
		return letter;
}


void Capitalise(char* phrase) {
	int i;
	if (phrase[0] != '\0') {
		if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
			phrase[0] = singleLetter(phrase[0]);
		}
	}


	for (i = 0; i < strlen(phrase); i++) {
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
				phrase[i+1] = singleLetter(phrase[i + 1]);
			}
		}
	}
}