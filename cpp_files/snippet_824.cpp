void Capitalise(char *phrase)
{
	int i, j, k;
	i = 0;
	while (phrase[i] != '\0')
		{
			i++;
		}
	if ((123 > phrase[0]) && (phrase[0] > 96))
	{
		phrase[0] = phrase[0] - 32;
	}
	for (j = 0; j <= i; j++)
	{
		k = j + 1;
		if (phrase[j] == 32)
		{
			if ((123 > phrase[k]) && (phrase[k] > 96))
			 {
				 phrase[k] = phrase[k] - 32;
			 }

		}

	}

}