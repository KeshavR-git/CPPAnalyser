void Capitalise(char *phrase)
{
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] = phrase[0] - ('a' - 'A');
	}

	int i;
	int max;
	max = strlen(phrase);
	for (i = 0; i < max; i++) {
		if ((phrase[i] == 32) && (phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
			phrase[i + 1] = phrase[i + 1] - ('a' - 'A');
		}
	}
}