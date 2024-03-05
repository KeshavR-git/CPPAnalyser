void Capitalise(char *phrase)
{
	int i;
	int pos = 0;
	if (phrase[pos] >= 'a' && phrase[pos] <= 'z'){
	phrase[pos] = phrase[pos] - 32;
	}

	for (i = 1; phrase[i] != '\0'; i++) {
		if (phrase[i] == ' ') {
			pos = i + 1;
				if (phrase[pos] >= 'a' && phrase[pos] <= 'z'){
				phrase[pos] = phrase[pos] - 32;
				}
		}
	}
}