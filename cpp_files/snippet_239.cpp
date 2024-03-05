void Capitalise(char* phrase)
{
	int phraseLen = strlen(phrase);
	
	if (phrase[0] >= 'a' && phrase[0] <= 'z')
	{
		phrase[0] = phrase[0] - 32;
	}
	int i = 0;
	
	for (i = 0; i< phraseLen -1; i++)
	{
		if (phrase[i] == ' ')
		{
			if ( phrase[i+1] <= 'z' && phrase[i+1] >= 'a')
			{
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
	}
}