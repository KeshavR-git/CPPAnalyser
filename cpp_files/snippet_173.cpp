void Capitalise(char * phrase)
{
	int i = 0;
	int capitaliseNext = 1;

	while (phrase[i] != 0)
	{
		if (capitaliseNext && phrase[i] >= 97 && phrase[i] <= 122)
		{
			phrase[i] -= 32;
			capitaliseNext = 0;
		}
		else if (phrase[i] == ' ')
		{
			capitaliseNext = 1;
		}
		else
		{
			capitaliseNext = 0;
		}

		i++;
	}
}