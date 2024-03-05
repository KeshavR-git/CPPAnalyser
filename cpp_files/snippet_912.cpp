void Capitalise(char* phrase) {
	int size = strlen(phrase);
	if (96 < phrase[0] && phrase[0] < 123) {
		phrase[0] = phrase[0] - 32;
	}
	for (int i = 0; i < size; i++) {
		if (phrase[i - 1] == 32 && phrase[i] > 96 && phrase[i] < 123) {
			phrase[i] = phrase[i] - 32;
		}
	}
}