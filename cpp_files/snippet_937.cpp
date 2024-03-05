void Capitalise(char *phrase)
{
	int i = 0;

	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[i] -= 32;
	}

	for (i = 0; i < (int)strlen(phrase); i++) {
		if ((phrase[i] == 32) && (phrase[i+1] >= 97) && (phrase[i+1] <= 122)) {
			phrase[i+1] -= 32;
		}
	}
}