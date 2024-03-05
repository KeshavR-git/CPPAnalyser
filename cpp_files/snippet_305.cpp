void Capitalise(char* phrase) {
	char a;
	int b;
	int i;
	char c;
	
	b = strlen(phrase);

	for (i = 1; i <= b;) {
		if ((phrase[i - 1] == ' ') && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			c = phrase[i];
			phrase[i] = c - 32;
			i++;
		}else {
			i++;
		}
	}

    if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
			a = phrase[0];
			phrase[0] = a - 32;
		}
		else {
			phrase[0] = phrase[0];
		}

	return;
}