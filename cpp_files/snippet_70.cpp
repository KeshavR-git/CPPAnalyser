char CapitaliseCharacter(char Character)
{
	char upperCharacter = (Character);

	return (upperCharacter - 32);
}

void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	int i = 0;

	while (i < length)
	{

		if (i == 0)
		{
			if ((phrase[i] > 96) && (phrase[i] < 123))
			{
				phrase[i] = CapitaliseCharacter(phrase[i]);
			}
		}

		else if (isspace(phrase[i - 1]))
		{
			if ((phrase[i] > 96) && (phrase[i] < 123))
			{
				phrase[i] = CapitaliseCharacter(phrase[i]);
			}
		}

		i++;
	}

}