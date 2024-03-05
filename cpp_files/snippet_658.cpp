void Capitalise(char* phrase);
char Cap(char letter);

void Capitalise(char* phrase) {
	int i;
	for (i = 0; i < strlen(phrase); i++) {
		if ((phrase[i] == 32)&&(phrase[i + 1] > 0)) {
			phrase[i + 1] = Cap(phrase[i + 1]);
		}
		else if (phrase[0] > 0) {
			phrase[0] = Cap(phrase[0]);
		}
		else {
			phrase[i] = phrase[i];
		}

			
	}
}


char Cap(char letter) {
	if ((letter > 96) && (letter < 123)) {
		letter = letter - 32;
	}

	return letter;
 }