void Capitalise(char* phrase) {
	
	for (int i = 0; i < strlen(phrase); i++) {
		if (i == 0 && phrase[i] > 90) {
			phrase[i] = phrase[i] - 32;
		}
		
		if (phrase[i] == 32 && phrase[i+1] > 90) {
			i++;
			phrase[i] = phrase[i] - 32;
		}
	}
}