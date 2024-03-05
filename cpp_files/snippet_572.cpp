void Capitalise(char *phrase) {
	int length = strlen(phrase) - 1;
	int capitalCount = 0;

	for (int i = 0; i < length + 1; i++) {
		if ((phrase[i] != 32) && (capitalCount == 0)) {
			capitalCount = 1;
			if ((phrase[i] < 123) && (phrase[i] > 96)) {
				phrase[i] = (phrase[i] - 32);
			}
		}
		else if ((phrase[i] == 32) && (capitalCount == 1)) {
			capitalCount = 0;
		}
	}
}