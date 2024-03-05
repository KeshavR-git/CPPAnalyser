void Capitalise(char* phrase)
{
	int i = 0;
	int length;

	length = strlen(phrase);

	while (i < length) {
		if ((96 < phrase[i]) && (phrase[i] < 123)) {
			if ((i == 0) && (96 < phrase[i]) && (phrase[i] < 123)) {
				phrase[i] = phrase[i] - 32;
			}
			else if ((phrase[i - 1] == 32) && (96 < phrase[i]) && (phrase[i] < 123)) {
				phrase[i] = phrase[i] - 32;
			}
		}
		i++;
	}

}