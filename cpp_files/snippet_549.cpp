void Capitalise(char *phrase) {

	int i;

	for (i = 0; phrase[i] != '\0'; i++) {
		if (i == 0) {
			if ((phrase[i] < 123) && (phrase[i] > 96)) {
				phrase[i] = phrase[i] - 32;
			}
		}
		else if (phrase[i]==' ') {
			i++;
			if ((phrase[i] < 123) && (phrase[i] > 96)) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}