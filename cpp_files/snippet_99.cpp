void Capitalise(char* phrase) {

	int length = 0;
	int word_length = 0;
	int letter;

	while (phrase[length] != '\0') {
		length++;
	}

	for (int currentletter = 0; length + 1 >= currentletter; currentletter++) {

		if ((phrase[currentletter] != 32) && (phrase[currentletter] != '\0')) {
			word_length++;
		}
		else {
			letter = currentletter - word_length;

			for (int lowercase = 97; 122 >= lowercase; lowercase++) {
				if (phrase[letter] == lowercase) {
					phrase[letter] = lowercase - 32;
				}
			}
			word_length = 0;
		}
	}
}