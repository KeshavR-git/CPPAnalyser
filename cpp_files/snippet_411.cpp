void Capitalise(char *phrase)
{
	int i;
	int status = 1;
	int length = strlen(phrase);

	for ( i = 0; i <= (length-1); i++)
	{
		if (phrase[i] != 0 && status)
		{
			if (phrase[i] >= 97 && phrase[i] <= 122)
			{
				phrase[i] = phrase[i] - 32;
			}			
			status = 0;
		} else if (phrase [i] == 32)
		{
			status = 1;
		}
	}
}