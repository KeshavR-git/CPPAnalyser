void Capitalise(char *phrase)
{
	int i = 0;

	while (phrase[i] != '\0') {
		if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
			if ((phrase[i - 1] == 32) || (phrase[0] == phrase[i])) {
				phrase[i] = phrase[i] - 32;
			}
		}
		i++;
	}
}