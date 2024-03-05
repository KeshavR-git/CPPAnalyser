void Capitalise(char *phrase)
{
	int phraseLength = strlen(phrase);
	int i = 0;

	if (phrase[0] > 96 && phrase[0] < 123) {
		phrase[0] -= 32;
	}

	while (i < phraseLength) {
		if ((phrase[i] == 32) && (phrase[i+1] < 123) && (phrase[i+1] > 96)) {
			phrase[i+1] -= 32;
			i++;
		}
		i++;
	}

}