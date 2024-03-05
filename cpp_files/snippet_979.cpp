void Capitalise(char* phrase) {

	int i = 0, capitalise = 0;

	while (phrase[i] != '\0') {
		
		if (capitalise == 0) {
			if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
				
			}
			capitalise = 1;
		}

		if ((capitalise == 1) && (phrase[i] == 32)) {
			if ((phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
				capitalise = 0;
			}
		}
		i++;

	}

}