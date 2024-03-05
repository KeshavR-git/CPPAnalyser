void Capitalise(char* phrase) {
	int i = 0;
	if (phrase[i] < 123 && phrase[i] > 96) {
		phrase[0] -= 32;
	}

	while (phrase[i] != 0) {
		if (phrase[i] == 32 && phrase[i + 1] < 123 && phrase[i + 1] > 96) {
			phrase[i + 1] -= 32;
		}
		i++;
	}
}