void Capitalise(char *phrase)
{
	int length, i;
	length = strlen(phrase);
	for (i = 0; i < length; i++) {
		if ((phrase[i] > 96) && (phrase[i] < 123)) {
			if (i == 0) {
				phrase[i] -= 32;
			}
			else if (phrase[i - 1] == ' ') {
				phrase[i] -= 32;
			}
		}
	}
}