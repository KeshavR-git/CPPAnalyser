void MakeCap(char *phrase, int pos) {
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

void Capitalise(char *phrase) {
	
	int i = 0;
	
	MakeCap(phrase, 0);
	
	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			MakeCap(phrase, i + 1);
		} 
		i++;
	}
}