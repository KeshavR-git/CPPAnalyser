int helper(char letter)
{
	if (letter >= 97 && letter <= 122) {
		letter = letter - ('a' - 'A');
	}
	return letter;
}

void Capitalise(char *phrase)
{
	int i = 0;

	phrase[i] = helper(phrase[i]);

	while(phrase[i] != '\0') {
		if(phrase[i] == 32) {
			phrase[i + 1] = helper(phrase[i + 1]);
		} else {
		}
		i++;
	}
}