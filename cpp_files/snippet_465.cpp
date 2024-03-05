void Capitalise(char* phrase)
{
	int length = 0, i;

	while (phrase[length] != '\0') {
		length++;
	}

	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
				phrase[i + 1] = phrase[i + 1] - ('a' - 'A');
			}
		}
	}
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = phrase[0] - ('a' - 'A');
		}
}