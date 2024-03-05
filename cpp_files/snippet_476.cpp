void Capitalise(char* phrase) {
	int capNext = 0
	; if (phrase[0] >= 97 && phrase[0] <= 122) phrase[0] -= 32;
	for (int i = 0; phrase[i] != '\0'; i++) {
		if (phrase[i] >= 97 && phrase[i] <= 122 ) {
			if (capNext) phrase[i] -= 32;
			capNext = 0;
		}
		else if ((phrase[i] >= 65 && phrase[i] <= 90)) {
			capNext = 0;
		}
		else if (phrase[i] == 32) {
			capNext = 1;
		}
	}
}