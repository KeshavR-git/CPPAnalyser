void Capitalise(char *phrase) {
	int i, l = strlen(phrase);

	for (i = 0; i < l; i++) {
		if ((i == 0) && ((phrase[i] > 96) && (phrase[i] < 123))) {
			phrase[i] = phrase[i] - 32;
		} else if ((phrase[i - 1] == 32) && ((phrase[i] > 96) && (phrase[i] < 123))) {
			phrase[i] = phrase[i] - 32;
		}
	}
}