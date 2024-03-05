void Capitalise(char *phrase)
{
	int x;
	
	for (x = 0; x < strlen(phrase); x++)
	{
		if (x == 0)
		{
			phrase[x] = toupper(phrase[x]);
		}
		else if (phrase[x -1] == ' ')
		{
			phrase[x] = toupper(phrase[x]);
		}
	}
}