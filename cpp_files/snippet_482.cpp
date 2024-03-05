void Capitalise(char* phrase) {

	int length = 0;
	while (phrase[length] != '\0') {
		length++;
	}

	for (int j = 1; j <= 26; j++) {
		if (phrase[0] == 96 + j)
			phrase[0] = phrase[0] - 32;
	}

	
	for (int i = 0; i < length; i++) {
		for (int j = 1; j <= 26; j++) {
			if ((phrase[i] == 96+j)&&(phrase[i-1]==' '))
				phrase[i] = phrase[i] - 32;
		}
	}	
}