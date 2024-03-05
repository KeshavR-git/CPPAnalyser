void MakeCap(char* phrase, int pos) {
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}

}

void Capitalise(char* phrase) {
	int i;

	MakeCap(phrase, 0);

	for (i = 1; i < strlen(phrase); i++) {
		if (phrase[i - 1] == ' ') {
			MakeCap(phrase, i);
		}
	}

	return;
}