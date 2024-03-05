char capital(char character)
{
	char lowers[26];
	char uppers[26];
	int i;

	for (i = 0; i < 26; i++) {
		lowers[i] = 97 + i;
		uppers[i] = 65 + i;
	}
	
	for (i = 0; i < 26; i++) {
		if (character == lowers[i]) {
			character = uppers[i];
			break;
		}
	}

	return character;
}

void Capitalise(char *phrase)
{
	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {
		if (((phrase[i - 1] == ' ') && (phrase[i] != ' ')) || (i == 0)) {
			phrase[i] = capital(phrase[i]);
		}
	}

}