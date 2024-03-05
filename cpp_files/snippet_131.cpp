void Capitalise(char* phrase) {
	int space = 1;
	for (int i = 0; i < strlen(phrase); i++) {
		if (space == 1) {
			if (phrase[i] >= 65 && phrase[i] <= 90) {
				space = 0;
			}
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				phrase[i] = phrase[i] - 32;
				space = 0;
			}
		}
		if (phrase[i] == ' ') {
			space = 1;
		}
	}
}