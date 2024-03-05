void Capitalise(char* phrase)
{
	int i;
	int length = strlen(phrase);

	phrase[0] = toupper(phrase[0]);

	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}