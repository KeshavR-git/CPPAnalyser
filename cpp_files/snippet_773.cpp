void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++)
	{
		if (((i == 0) || (phrase[i - 1] == ' ')) && (phrase[i] >= 'a') && (phrase[i] <= 'z'))
		{
			phrase[i] -= 32;
		}
	}
}