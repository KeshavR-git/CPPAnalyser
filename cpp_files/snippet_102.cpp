void Capitalise(char* phrase) {
	int i = 0, strLength = 0;

	while (phrase[i] != '\0') {
		i++;
		strLength++; // will be 1 longer than it is supposed to be
	}
	i = 1;
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] = (phrase[0] - 32);
	}
	for (i = 1; i < (strLength - 1); i++) {

		if (((phrase[i] >= 97) && (phrase[i] <= 122) && (phrase[i - 1] == 32))) {
			phrase[i] = (phrase[i] - 32);
		}
		else {
			phrase[i] = phrase[i];
		}
	}
	return;
}