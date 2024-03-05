void Capitalise(char *phrase) {
	int i = 0;
	while (i < strlen(phrase)) {
		while (phrase[i] == ' ' && phrase[i] != '\0') {
			i++;
		}
		if (phrase[i] >= 97 && phrase[i] <= 122) {
			phrase[i] = phrase[i] - 32;
		}
		while (phrase[i] != ' ' && phrase[i] != '\0') {
			i++;
		}
	}
}