void Capitalise(char* phrase)
{
	int i;
	int length;
	length = strlen(phrase);
	for (i = 0; i<length; i++)
	{
		if (i == 0)
		{
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z'))
			{
				phrase[i] = phrase[i] - 32;
				continue;
			}
		}
		if (phrase[i] == ' ')
		{
			i++;
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z'))
			{
				phrase[i] = phrase[i] - 32;
				continue;
			}
		}
		else
		{
			if ((phrase[i] >= 'A') && (phrase[i] <= 'Z'))
			{
				phrase[i] = phrase[i];
			}
		}

	}
}