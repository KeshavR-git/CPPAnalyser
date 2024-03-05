void Capitalise(char *phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		if ((i == 0) && (phrase[i] <= 127) && (phrase[i] >= 97)) {
			phrase[i] = phrase[i] - 32;
		}
		else if (phrase[i - 1] == 32) {
			if ((phrase[i] <= 127) && (phrase[i] >= 97)) {
				phrase[i] = phrase[i] - 32;
				}
		}
		i = i +1;
	}
}