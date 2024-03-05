void Capitalise(char* phrase)
{
	int i;

	for (i = 97; i < 123; i++) {
		if (phrase[0] == i) {
			phrase[0] = phrase[0] - 32;
		}
	}

	int j = 1;

	while (phrase[j] != 0) {
		if (phrase[j] == 32) {
			for (i = 97; i < 123; i++) {
				if (phrase[j + 1] == i) {
					phrase[j + 1] = phrase[j + 1] - 32;
				}
			}
		}

		j++;
	}
}