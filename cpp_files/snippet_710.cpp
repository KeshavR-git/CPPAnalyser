void Capitalise(char* phrase)
{
	int length, i;
	length = strlen(phrase);
	if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) {
		phrase[0] = phrase[0] - ('a' - 'A');
	}

		for (i = 1; i < length; i++) {
			if ((phrase[i - 1] == ' ') && (phrase[i] != ' ')) {
				if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
					phrase[i] = phrase[i] - ('a' - 'A');
				}
			}
	}
}