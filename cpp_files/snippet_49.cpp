void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != 0) {
		if (phrase[i - 1] == ' ' || i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		i++;
	}
}