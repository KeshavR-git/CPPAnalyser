void Capitalise(char *phrase)
{
	int len = strlen(phrase);
	int i;
	if ((phrase[0] >= 'a') && (phrase[0] <= 'z'))
	{
		phrase[0] = phrase[0] - ('a' - 'A');
	}
	for (i = 1; i < len; i++)
	{
		if (phrase[i-1] == ' ')
		{
			if ((phrase[i] >= 97) && (phrase[i] <= 122))
			phrase[i] = phrase[i] - ('a' - 'A');
		}
	}
}