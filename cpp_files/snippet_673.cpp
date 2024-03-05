void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	int i = 0;

	while (i < length) {
		if ((phrase[i - 1] == ' ') || (i == 0)) {
			if ((phrase[i] > 96) && (phrase[i] < 123)) {
				phrase[i] = phrase[i] - 32;
			}
			else {
			}
		}
		else {
		}
		i++;
	}
}