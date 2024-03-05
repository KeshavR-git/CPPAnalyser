void Capitalise(char *phrase)
{
	int i;

	if (phrase[0] >= 'a' && phrase[0] <= 'z') {
		phrase[0] = phrase[0] - 32;
	}

	for (i = 0; phrase[i] != '\0'; i++) {
		if (phrase[i] == ' '){
			++i;
			if (phrase[i] >= 'a' && phrase[i] <= 'z'){
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}