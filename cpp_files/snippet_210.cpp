void Capitalise(char *phrase)
{
	int i;
	int length = strlen(phrase) - 1;

	if (length == 0) {
		if (phrase[0] >= 'a' && phrase[0] <= 'z') {
			phrase[0] = phrase[0] -32;
		}
	} else {
		for (i = 0; i < length; i++) {
			if (i == 0) {
				if ((phrase[i] >= 'a' && phrase[i] <= 'z')) {
					phrase[i] = phrase[i] - 32;
				}
			} else if (phrase[i] == ' ') {
				if (phrase[i+1] >= 'a' && phrase[i+1] <= 'z') {
					phrase[i+1] = phrase[i+1] - 32;
				}
			}
		}
	}

	return;
}