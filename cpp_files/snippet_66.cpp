void Capitalise(char* phrase)
{
	if (phrase[0] >= 97 || phrase[0] >= 122)
	{
		phrase[0] = phrase[0] - 32;
	}
	int col = 0;
	while (phrase[col] != 0)
	{
		if (phrase[col] == ' ' && phrase[col+1]>=97)
		{
			phrase[col+1] = phrase[col+1] - 32;
			col++;
		}
		col++;
	}

}