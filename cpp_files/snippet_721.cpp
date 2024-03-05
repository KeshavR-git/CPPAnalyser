void Capitalise(char *phrase)
{
	int i, j;
	j = strlen(phrase);
	for (i = 0; i < j; i++)
	{
		if (phrase[i] == 32 && (phrase[i + 1] > 96 && phrase[i + 1] < 123))
		{
			phrase[i + 1] = phrase[i + 1] - 32;
		}
	}
	if (phrase[0] > 96 && phrase[0] < 123)
	{
		phrase[0] = phrase[0] - 32;
	}
}