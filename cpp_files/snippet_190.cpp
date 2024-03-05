void Capitalise(char* phrase)
{
	int h = strlen(phrase);
	int i = 0;

	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] = phrase[0] - 32;
	}
	for (i = 0; i <= h; i++) {
		if ((phrase[i - 1] == 32)&& (phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] = phrase[i] - 32;
		}

	}
}