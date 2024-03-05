void Capitalise(char* phrase) {

	int i = 0;
	int length;

	while (phrase[i] != '\0') {
		i++;
		length = i;
	}

	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}

	for (i = 0; i <= length; i++) {
		if ((phrase[i] == 32) && (phrase[i+1] > 96) && (phrase[i+1] < 123)) {
			phrase[i + 1] = phrase[i + 1] - 32;
		}
	}

}