char CapitaliseLetter(char letter)
{
	if ((letter > 96) && (letter < 123))
	{
		return (letter = letter - 32);
	}
	else return letter;
}


void Capitalise(char *phrase)
{
	int i;

	phrase[0] = CapitaliseLetter(phrase[0]);

	for (i = 0; i < strlen(phrase) - 1; i++)
	{
		if (phrase[i] == 32)
		{
			phrase[i + 1] = CapitaliseLetter(phrase[i + 1]);
		}

	}
}