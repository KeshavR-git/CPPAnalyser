void Capitalise(char *phrase)
{
	int i = 0;

	for (i = 0; i < strlen(phrase); i++) {
		if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		else if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}