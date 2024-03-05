char Helper(char letter) {

	if (letter >= 97 && letter <= 122) {
		letter = letter - 32;
		return letter;
	}
	else return letter;
}
void Capitalise(char* phrase) {

	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ' && phrase[i + 1] > 0) {
			phrase[i + 1] = Helper(phrase[i + 1]);
		}
		else if (phrase[0] > 0) {
			phrase[0] = Helper(phrase[0]);
		}
		else {
			phrase[i] = phrase[i];
		}
	}
}