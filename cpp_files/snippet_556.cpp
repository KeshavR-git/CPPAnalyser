void Capitalise(char* phrase)
{
	int i;
	int length = strlen(phrase);

	if (length == 1 && phrase[0] > 96 && phrase[0] < 123) {
		phrase[0] = phrase[0] - 32;
	}


	for (i = 0; i < length - 1; i++) {
		if ((phrase[i - 1] == 32 || i == 0) && phrase[i] > 96 && phrase[i] < 123) {
			phrase[i] = phrase[i] - 32;
		}

	}

}