void Capitalise(char* phrase) {
	int i;
	int phraseLength = strlen(phrase);
	for (i = 0; i < phraseLength; i++) {
		if (i == 0) {
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z'))
			{
				phrase[i] = toupper(phrase[i]);
				continue;
			}
		}
		if (phrase[i] == ' ') {
			if ((phrase[i+1] >= 'a') && (phrase[i+1] <= 'z'))
			{
				phrase[i+1] = toupper(phrase[i+1]);
				continue;
			}
		}
	}
}