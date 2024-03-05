void Capitalise(char* phrase) {

	int i = 0;
	if (phrase[0] > 96) {
		phrase[0] = phrase[0] - ('a' - 'A');
	}
	while (phrase[i] != '\0') {
		if (phrase[i] > 96) {
			if (phrase[i - 1] == ' ') {
				phrase[i] = phrase[i] - ('a' - 'A');
			}
		}
		i++;
	}
}