void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++)
	{
		if (i == 0 && phrase[i] >= 'a' && phrase[i] <= 'z') {
			phrase[i] = phrase[i] - 32;
			continue;
		}

		if(phrase[i]==' ')
		{
			i++;
				if (phrase[i] >= 'a' && phrase[i] <= 'z') {
					phrase[i] = phrase[i] - 32;
				}
		}
			
	}

	
}