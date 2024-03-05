void Capitalise(char* phrase)
{
	phrase[0] = toupper(phrase[0]);
	int i = 0;
	while (phrase[i] != '\0') {
		if (phrase[i - 1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
		i++;
	}
}