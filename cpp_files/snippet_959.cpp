void CapitaliseLetter(char *phrase, int index) {
	if (phrase[index] >= 'a' && phrase[index] <= 'z') {
		phrase[index] += 'A' - 'a';
	}
}

void Capitalise(char *phrase) {
	CapitaliseLetter(phrase, 0);

	int i = 1;

	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			CapitaliseLetter(phrase, i + 1);
		}
		i++;
	}
}