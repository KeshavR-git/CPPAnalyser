void Capitalise(char *phrase)
{
	int i;
	for (i = 0; i <= strlen(phrase); i++) {
		if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
			if (phrase[i - 1] == 32) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
	for (i = 0; i == 0; i++) {
		if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] = phrase[i] - 32;
		}
	}
}