void Capitalise(char *phrase)
{
	if (phrase[0] >= 'a' && phrase[0] <= 'z') {
		phrase[0] -= 32;
	}
	int i;
	for (i = 1; i < strlen(phrase); i++) {
		if (phrase[i - 1] == ' ' && (phrase[i] >= 'a' && phrase[i] <= 'z')) {
			phrase[i] -= 32;
		}
	}
}