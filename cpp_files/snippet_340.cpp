void Capitalise(char* phrase)
{
	int i;

	for (i = 0; phrase[i] != '\0'; i++) {
		if (phrase[i] == ' ') {
			i += 1;
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
			{
				phrase[i] = phrase[i] - 32;
			}

		}
		else if (i == 0) {
			if ((phrase[i] >= 'a' && phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}

}