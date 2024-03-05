void Capitalise(char* phrase) {
	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
			if ((phrase[i - 1] == ' ') || (i == 0)) {
				phrase[i] = (phrase[i] - 32);
			}
		}
	}
}