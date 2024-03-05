void Capitalise(char *phrase)
{
	int i = 0;
	int length = strlen(phrase);
	if (phrase[i] > 96) {
		phrase[i] = phrase[i] - 32;
	}
	for (i = 0; i < length; i++) {
		if ((phrase[i] == ' ') && (phrase[i + 1] > 96)) {
			phrase[i + 1] = phrase[i+1] - 32;
		}
	}
	return;
}