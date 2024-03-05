void Capitalise(char *phrase)
{
	int x = strlen(phrase);
	int i;
	if ((phrase[0] <= 122) && (phrase[0] >= 97)) {
		phrase[0] -= 32;
	}

	for (i = 1; i <= x; i++) {
		if ((phrase[i] <= 122) && (phrase[i] >= 96)) {
			if (phrase[i - 1] == 32) {
				phrase[i] -= 32;
			}
		}
	}

}