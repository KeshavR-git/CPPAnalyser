void Capitalise(char *phrase)
{
	int i, length;

	length = strlen(phrase);

	for (i = 0; i <= length - 1; i++) {
		if (phrase[i] == 32) {
			if ((phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
		else if (i == 0) {
			if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
			
			}
		}
	}
}