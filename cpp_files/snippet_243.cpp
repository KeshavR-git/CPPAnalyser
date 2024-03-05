void Capitalise(char *phrase)
{
	int i = 0;
	int n = strlen(phrase);

	if (phrase[0] > 96) {
		phrase[i] = phrase[i] - 32;
	}

	for (i = 0; i < n; i++) {
		if ((phrase[i + 1] > 96) && (phrase[i] == ' ')) {
			phrase[i + 1] = (phrase[i + 1] - 32);
		}
	}
	return;
}