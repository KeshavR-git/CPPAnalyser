void Capitalise(char* phrase) {
	int length, i;
	length = 0;
	
	while (phrase[length] != '\0') {
		length++;
	}
	for (i = 0; i <= length - 1; i++) {
		if (phrase[0] != ' ') {
			int result = phrase[0] - 96;
			if ((result >= 1) && (result <= 26)) {
				char Capital = 64 + result;
				phrase[0] = Capital;
			}
		}
		if ((phrase[i] != ' ') && (phrase[i - 1] == ' ')) {
			int result = phrase[i] - 96;
			if ((result >= 1) && (result <= 26)) {
				char Capital = 64 + result;
				phrase[i] = Capital;
			}
		}

	}
}