void Capitalise(char *phrase)
{
	int i;

	for (i = 0; i < strlen(phrase); i++)
	{
		if (((phrase[i] == phrase[0]) || (phrase[i-1] == ' ')) && ((phrase[i] < 123) && (phrase[i] > 96)))
		{
			phrase[i] -= 32;
		}
	}
}