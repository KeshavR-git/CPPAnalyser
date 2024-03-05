void Capitalise(char* phrase) {
	int i;
	int j = strlen(phrase);

	for (i = 0; i < j; i++) {
		if (isalpha(phrase[i]) && ((phrase[i - 1] == ' ') || phrase[i - 1] == phrase[-1])) {
			phrase[i] = toupper(phrase[i]);
		}



	}
}