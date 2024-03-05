void Capitalise(char* phrase)
{
	int i = 0;
	int j = strlen(phrase);

	for (i = 0; i < j; i++) {
		if (phrase[i - 1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
	}
	phrase[0] = toupper(phrase[0]);
}