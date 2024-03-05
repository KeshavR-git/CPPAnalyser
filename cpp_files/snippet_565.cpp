void Capitalise_letter(char* letter) {
	if ((*letter <= 122) && (*letter >= 97)) {
		*letter -= 32;
	}
}

void Capitalise(char* phrase) {
	int i;

	Capitalise_letter(&phrase[0]);

	for (i = 1; i < strlen(phrase); i++) {
		if (phrase[i - 1] == 32) {
			Capitalise_letter(&phrase[i]);
		}
	}
}