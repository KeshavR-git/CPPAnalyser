void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	int i;

	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] -= 32;
	}

	for (i = 0; i < length; i++) {
		if (phrase[i - 1] == ' ') {
			if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
				phrase[i] -= 32;
			}
		}
	}
}