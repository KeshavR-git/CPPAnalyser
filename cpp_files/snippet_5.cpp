char ChangeCase(char letter)
{
	if ((letter >= 'a') && (letter <= 'z')) {
		letter -= 32;
	}
	return letter;
}
// EXERCISE 3
void Capitalise(char* phrase)
{
	int i;
	for (i = 0; i < strlen(phrase); i++) {
		if ((i == 0) || (phrase[i - 1] == ' ')) {
			phrase[i] = ChangeCase(phrase[i]);
		}
	}
}