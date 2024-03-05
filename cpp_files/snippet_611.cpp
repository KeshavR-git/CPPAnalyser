void Capitalise(char* phrase)
{
	char lower[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	int i, j;
	int end = strlen(phrase) - 1;

	for (i = 0; i <= end; i++)
	{
		for (j = 0; j <= 27; j++)
		{
			if (phrase[0] == lower[j])
			{
				phrase[0] = upper[j];
			}
			else if ((phrase[i] == ' ') && (phrase[i + 1] != ' '))
			{
				if (phrase[i + 1] == lower[j])
				{
					phrase[i + 1] = upper[j];
				}
			}
		}
	}
}