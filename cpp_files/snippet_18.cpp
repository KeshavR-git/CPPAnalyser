void Capitalise(char *phrase)
{
	if ((phrase[0] >= 'a') && (phrase[0] <= 'z'))
		phrase[0] += 'A' - 'a';
	
	for (char* c = phrase + 1; *c != '\0'; c++)
	{
		if (*(c - 1) == ' ')
		{
			if ((*c >= 'a') && (*c <= 'z'))
				*c += 'A' - 'a';
		}
	}
}