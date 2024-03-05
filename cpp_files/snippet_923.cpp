void Capitalise(char* phrase)
{
	int i = 1;

	if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) {
		phrase[0] = phrase[0] - ('a' - 'A');
	}
	while (i <= strlen(phrase)) {
		int j = i + 1;
		if (phrase[i] == ' ') {
			if ((phrase[j] >= 'a') && (phrase[j] <= 'z')) {
				phrase[j] = phrase[j] - ('a' - 'A');
			}
		}
		i++;
	}
}