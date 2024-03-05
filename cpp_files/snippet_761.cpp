void Capitalise(char *phrase) {
	int i = 0;
	while(phrase[i] != 00) {
		if (((phrase[i] >= 'a') && (phrase[i] <= 'z') && (phrase[i - 1] == ' ')) || ((phrase[0] >= 'a') && (phrase[0] <= 'z'))) {
            phrase[i] = phrase[i] - ('a' - 'A');
        }
		i++;
	}
}