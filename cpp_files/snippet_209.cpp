void Capitalise(char *phrase) {

	int len = 0;
	while (phrase[len] != '\0') {
		len++;
	}

	for (int i = 0; i <= (len - 1); i++) {
		if (((i == 0) || ((phrase[i - 1]) == 32)) && (phrase[i] != 32)) { //checks if first word
			if ((phrase[i] <= 122) && (phrase[i] >= 97)) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}