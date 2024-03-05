void Capitalise(char* phrase) {
	int i=0;
	while (phrase[i] != 0) {
		phrase[0] = toupper(phrase[0]);
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
		i++;	
	}
}