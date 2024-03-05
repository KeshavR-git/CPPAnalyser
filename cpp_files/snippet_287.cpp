void Capitalise(char* phrase)
{
	int i = 0;

	while (phrase[i] != 0)
	{
		if ((i == 0) && (phrase[i] > 96) && (phrase[i] < 123))
		{
			phrase[i] = phrase[i] - 32;
		}


		if ((phrase[i] > 96) && (phrase[i] < 123) && (phrase[i-1] == 32))
		{
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}