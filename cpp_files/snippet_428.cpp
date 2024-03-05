void Capitalise(char *phrase)
{
	int i = 0;
	int length = strlen(phrase);
	if (phrase[0] > 96 && phrase[0] < 123) {
		phrase[0] -= 32;
	}

	while (i < length) {
		if (phrase[i] == ' ') {
			if (phrase[i + 1] > 96 && phrase[i + 1] < 123) {
				char charchange = phrase[i + 1];
				charchange -= 32;
				phrase[i + 1] = charchange;
				i++;
			}
			i++;
		}
		else {
			i++;
				
		}

	}

}