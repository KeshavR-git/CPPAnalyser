void Capitalise(char* phrase) {
	int Len = strlen(phrase);
	int i, letter;
	for (i = 0; i < Len; i++) {
		if (((i == 0) && (i != ' ')) || ((phrase[i] != ' ') && phrase[i - 1] == ' ')) {
			letter = phrase[i];
			phrase[i] = toupper(letter);
		}
	}

}