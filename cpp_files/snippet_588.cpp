void Capitalise(char* phrase) {
	const int len = strlen(phrase);

	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}
	for (int j = 0; j < len; j++) {
		if ((phrase[j] == 32) && (phrase[j + 1] > 96) && (phrase[j + 1] < 123)) {
			phrase[j + 1]=phrase[j+1]-32;
		}
	}
}