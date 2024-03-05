void Capitalise(char* phrase) {
	int i = 0, l = 0, j;
	//as long as we do not observe a null character it will run(null from string) 
	while (phrase[i] != 0) {
		l = l + 1;
		i++;
	}
	l = l - 1;
	phrase[0] = toupper(phrase[0]);
	for (j = 0; j <= l; j++) { 
		if (phrase[j - 1] == ' ') {
			phrase[j] = toupper(phrase[j]);
		}
	}
}