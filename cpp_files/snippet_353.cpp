int Capitalise(char* phrase)
{
	if (phrase[0] > 90)
	{
		phrase[0] = phrase[0] - 32;
	}

	for (int i = 1; i <= (strlen(phrase) - 1); i++)
	{
		if (phrase[i]==' ' && phrase[i+1]!=' ' && phrase[i+1]>90)
		{
			phrase[i + 1] = phrase[i + 1] - 32;
		}
	}
	return 0;
}