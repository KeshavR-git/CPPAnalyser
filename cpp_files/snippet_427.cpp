void Capitalise(char *phrase)
{
	int i;

	for (i = 0; phrase[i] != '\0'; i++)
	{
		if (phrase[i - 1] == 32 || i == 0)
		{
			if (phrase[i] > 96 && phrase[i] < 123)
			{
				phrase[i] -= 32;
			}
		}
	}
}