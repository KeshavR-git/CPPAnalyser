void Capitalise(char *phrase)
{
	int length = strlen(phrase);

	if ((phrase[0] > 96) && (phrase[0] < 173))
	{
		phrase[0] = (phrase[0] - 32);
	}

	for (int i = 0;i <= length; i++)
	{
		if (phrase[i] == 32)
		{
			if ((phrase[(i + 1)] > 96) && (phrase[(i + 1)] < 173)) 
			{
				phrase[(i + 1)] = (phrase[(i + 1)] - 32);
			}
		}

	}
}