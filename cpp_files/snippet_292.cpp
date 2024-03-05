void Capitalise(char* phrase)
{
	int number = strlen(phrase) -1;
	int i;
	char j;
	for (i = 0; i <= number; i++) {
		for (j = 97; j <= 122; j++) {
			if (phrase[i] == j) {
				char c = 32;
				if (phrase[i - 1] == c) {
					phrase[i] = phrase[i] - 32;
				}
			}

		}
	}
	char g;
	for (g = 97; g <= 122;g ++) {
		if (phrase[0] == g) {
			phrase[0] = phrase[0]  -32;
		}
	}
	
}