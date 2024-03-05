void Capitalise(char* phrase)
{
	int stringLength = strlen(phrase);
	int ascii;
	int i = 0;
	
	if ((phrase[i] >= 'a' && phrase[i] <= 'z')) {
		ascii = phrase[i];
		ascii = ascii - 32;
		char charater = ascii;
		phrase[i] = charater;
	}

	for (int i = 1; i < stringLength; i++) {
		if (phrase[i] == 32 || i  == 0) {
			if ((phrase[i + 1] >= 'a' && phrase[i+1] <= 'z')) {
				ascii = phrase[i+1];
				ascii = ascii - 32;
				char charater = ascii;
				phrase[i+1] = charater;
			}
		}
	}
}