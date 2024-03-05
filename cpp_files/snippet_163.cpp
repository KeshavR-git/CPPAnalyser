void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++)
	{
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 'a') && (phrase[i + 1] <= 'z'))
			phrase[i + 1] = phrase[i + 1] - 32;
		if ((i == 0) && (phrase[i] >= 'a') && (phrase[i] <= 'z'))
			phrase[i] = phrase[i] - 32;
	}
}