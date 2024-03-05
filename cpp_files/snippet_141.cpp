int Capitalise(char* phrase) {
	int i;
	//char capital = 'G';

	for (i = 0; i < 100; i++) {
		//basically reads whether the element is capital or not
		if (phrase[0] >= 'a' && phrase[0] <= 'z') {
			//minuses 32, since on ascii table, the difference between capital and lower case is 32
			phrase[0] = phrase[0] - 32;
		}
		else if ((phrase[i] == ' ') && (phrase[i+1] >= 'a' && phrase[i+1] <= 'z')) {
			phrase[i + 1] = phrase[i+1] - 32;
		}
	}

	return 0;
}