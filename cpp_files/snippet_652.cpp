void Capitalise(char* phrase)
{
	int j;

	for (j = 0; phrase[j] != '\0'; j++)
	{
		if (j == 0)
		{
			if ((phrase[j] >= 'a' && phrase[j] <= 'z'))
				phrase[j] = phrase[j] - 32;
			continue;
		}
		if (phrase[j] == ' ')
		{
			++j;

			if (phrase[j] >= 'a' && phrase[j] <= 'z')
			{
				phrase[j] = phrase[j] - 32;
				continue;
			}
		}
		else
		{
			if (phrase[j] >= 'A' && phrase[j] <= 'Z')
				phrase[j] = phrase[j] + 32;
		}
	}
}