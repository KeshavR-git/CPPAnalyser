void Capitalise(char *phrase)
{
	int i = 0;

	while (phrase[i] != '\0') {
		if (i == 0 && (phrase[0] >= 97 && phrase[0] <= 122)) {
			phrase[0] = (char)(phrase[0] - ('a' - 'A'));
		}
		else if ((phrase[i - 1] == ' ') && (phrase[i] >= 97 && phrase[i] <= 122)) {
			phrase[i] = (char)(phrase[i] - ('a' - 'A'));
		}
		i++;
	}
}