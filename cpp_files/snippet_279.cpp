void Capitalise(char* phrase) {
	int i;
	int length = strlen(phrase);

	for (i=0; i <= length; i++) {
		if ((i == 0) && (phrase[i] >= 'a' && phrase[i] <= 'z')) {
			phrase[i] = phrase[i] - 32;
			continue;
		}
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z')) {
			phrase[i+1] = phrase[i+1] - 32;
			i++;
			continue;
		}
	}
}