void Capitalise(char* phrase) {
	int isCap = 0;
	for (int i = 0; i <= strlen(phrase); i++) {
		if (phrase[i] == 32) {
			isCap = 0;
		}
		else if (phrase[i] < 97) {
			isCap = 1;
		}
		else if (isCap == 0 && phrase[i] >= 97) {
			phrase[i] = phrase[i] - 32;
			isCap = 1;

		}
	}
}