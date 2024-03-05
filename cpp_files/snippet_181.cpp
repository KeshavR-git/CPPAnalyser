void Capitalise(char* phrase) {
	int i;
	i = 0;
	int a;
	int b;
	b = 0;
	while (phrase[i] != '\0') {
		i++;
	}
	for (a = 0; a <= i - 1; a++) {
		if (phrase[a] == ' ') {
			b = 0;
		}
		if (phrase[a] > 96 && b == 0) {
			phrase[a] = phrase[a] - 32;
			b = 1;
		}
		if (phrase[a] > 64 && phrase[a] < 91) {
			b = 1;
		}
	}
}