void Capitalise(char* phrase) {
	int i = 0;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {

		int isLower = (phrase[i] >= 'a' && phrase[i] <= 'z');

		if ((isLower && i == 0) || (isLower && phrase[i - 1] == ' ')) {
			phrase[i] -= 32;
		}
	}
}