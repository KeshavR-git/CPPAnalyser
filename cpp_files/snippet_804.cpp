void Capitalise(char *phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++) {
		if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
			if (i == 0) {
				phrase[i] = phrase[i] - 32;
			}
			if (phrase[i - 1] == 32) {
				phrase[i] = phrase[i] - 32;
			}

		}

	}
}