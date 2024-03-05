void Capitalise(char* phrase) {
	char current = 'a';
	int i = 0;
	int cap = 1;
	while (current != '\0') {
		current = phrase[i];
		if ((current >= 'a' && current <= 'z') && (cap == 1)) {
			phrase[i] = phrase[i] - 32;
		}
		cap = 0;
		if (current == ' ') {
			cap = 1;
		}
		i = i + 1;
	}
}