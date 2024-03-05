void Capitalise(char *phrase) {
	int i;
	i = 1;
	phrase[0] = toupper(phrase[0]);
	while (i<1000){
		if (phrase[i] == 32) {
			phrase[(i + 1)] = toupper(phrase[(i + 1)]);
		}
		i++;
	}
}