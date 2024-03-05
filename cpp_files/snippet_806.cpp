void Capitalise(char* phrase) {

	int a;

	for (a = 0; a < strlen(phrase); a++) {
		if (a == 0 || phrase[a - 1] == ' ') {
			if (phrase[a] >= 'a' && phrase[a] <= 'z') {
				phrase[a] = (int)phrase[a] - 32;
			}
		}
	}

	return;
}