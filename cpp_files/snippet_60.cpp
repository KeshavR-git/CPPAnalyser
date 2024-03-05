void Capitalise(char *phrase) {
	int capitalise = 1;
	int i = 0;
	int ascValue;

	while (phrase[i] != '\0') {
		if (capitalise) {
			ascValue = (int)(phrase[i]);
			if ((ascValue >= 97) && (ascValue <= 122)) {
				phrase[i] = (char)(ascValue - 32);
			}
		}

		if (phrase[i] == ' ') {
			capitalise = 1;
		}
		else {
			capitalise = 0;
		}
		i++;
	}
}