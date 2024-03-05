void Capitalise(char* phrase) {
	int i;
	i = 0;

	while (phrase[i] != '\0') {

		phrase[0] = toupper(phrase[0]);

		if (phrase[i - 1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
		i++;
	}

}