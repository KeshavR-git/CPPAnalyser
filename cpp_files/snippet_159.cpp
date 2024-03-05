char Upper(char letter)
{
	if ((letter >= 'a') && (letter <= 'z'))
	{
		letter = (letter - ' ');
	}
	return letter;
}


void Capitalise(char *phrase)
{
	phrase[0] = Upper(phrase[0]);
	int i;
	for (i = 0; i < (strlen(phrase)); i = i + 1)
	{
		if (phrase[i - 1] ==' ')
		{
			phrase[i] = Upper(phrase[i]);
		}
	}
}