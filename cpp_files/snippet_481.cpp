void Capitalise(char *phrase)
{
	int i = 0;
	int length = strlen(phrase);
	if (phrase[0] > 96) {
		phrase[0] -= 32;
	}
	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			if (phrase[i + 1] > 96) {
				phrase[i + 1] -= 32;
			}
		}	
	}
}