void Capitalise(char *phrase)
{
	int length, i;
	length = strlen(phrase);
	
	if (phrase[0] != ' ')
		phrase[0] = toupper(phrase[0]);

	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}