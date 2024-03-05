char CapitalLetter(int character)
{
	if (character >= 97 && character <= 122)
	{
		character -= 32;
	}
	return character;
}

void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++)
	{
		if (i == 0 || phrase[i - 1] == ' ')
			phrase[i] = CapitalLetter(phrase[i]);
	}
}