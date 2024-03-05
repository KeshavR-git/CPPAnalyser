void CapitaliseLetter(char* phrase, int index)
{
	if (phrase[index] >= 97 && phrase[index] <= 122)
	{
		phrase[index] -= 32;
	}
}

void Capitalise(char* phrase)
{
	int i = 0;
	CapitaliseLetter(phrase, 0);
	while (phrase[i] != '\0')
	{
		if (phrase[i] == ' ')
		{
			CapitaliseLetter(phrase, i + 1);
		}

		i++;
	}
}