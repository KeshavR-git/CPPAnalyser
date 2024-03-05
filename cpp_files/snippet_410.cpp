void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != 0)
	{
		if (phrase[i] == ' ') {
			if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
				phrase[i + 1] = (char)(phrase[i + 1] - ('a' - 'A'));
			}
		}
		i++;
	}
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = (char)(phrase[0] - ('a' - 'A'));
	}
}