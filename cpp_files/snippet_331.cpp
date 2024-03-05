void Capitalise(char* phrase) {
	int i = 0, length = 0;
	while (i == 0) {
		if (phrase[length] == '\0') {
			break;
		}
		length++;
	}
	for (i = 0; i < (length - 1); i++) {
		if ((phrase[i] == ' ') && (phrase[i + 1] > 96) && (phrase[i + 1] < 123)) {
			phrase[i + 1] = phrase[i + 1] - 32;
		}
	}
	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}
}