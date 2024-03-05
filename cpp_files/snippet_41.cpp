void capLetter(char *letter) {
	if (*letter >= 97 && *letter <= 122) {
		*letter -= 32;
	}
}

void Capitalise(char* phrase) {
	// find length to know last char
	int len = strlen(phrase) - 1;
	//check first letter
	capLetter(&phrase[0]);
	for (int i = 1; i < len; i++) {
		if (phrase[i] == 32) {
			i++;
			capLetter(&phrase[i]);
		}
	}
}