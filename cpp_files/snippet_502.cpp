void Capitalise(char *phrase)
{

	if (phrase[0] >= 97 && phrase[0] <= 122)
	{
		phrase[0] = (char)(phrase[0] - ('a' - 'A'));
	}
	int n = 1;
	for (int i = 0; i < strlen(phrase); i++)
	{
		if (phrase[i] == 32 && phrase[n] >= 97 && phrase[n] <= 122)
		{
			phrase[n] = (char)(phrase[n] - ('a' - 'A'));
		
		}
		n++;
	}
}