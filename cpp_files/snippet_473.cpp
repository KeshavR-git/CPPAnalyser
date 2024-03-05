void Capitalise(char* phrase)
{
	int i;
	int x;
	x = strlen(phrase);

	phrase[0] = toupper(phrase[0]);
	for (i = 1; i < x; i++) {
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}