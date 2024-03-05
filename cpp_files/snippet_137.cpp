void Capitalise(char* phrase)
{
	int i = 0, a = 0;

	a = strlen(phrase);

	for (i = 0; i < a; i++) {
		if (i == 0) {
			if ((phrase[i] - 32) < 65) {
				phrase[i] = phrase[i];
			}
			else {
				phrase[i] = phrase[i] - 32;
			}
		}
		if (phrase[i] < 65) {
			if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z' && phrase[i] == 32 && phrase[i] != (33 || 44)) {
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
	}
}