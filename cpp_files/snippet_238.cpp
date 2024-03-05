void Capitalise(char* phrase)
{
	int i = 0;

	if (phrase[i] >= 97 && phrase[i] <= 122) {
		phrase[i] = (char)(phrase[i] - ('a' - 'A'));
	}

	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
				phrase[i + 1] = (char)(phrase[i + 1] - ('a' - 'A'));
			}
		}
		i++;
	}
}