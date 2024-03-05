void Capitalise(char *phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 97))
		{
			phrase[i + 1] = phrase[i + 1] - 32;
		}
		if ((phrase[i] == phrase[0]) && (phrase[i] >= 97))
		{
			phrase[i] = (phrase[i] - 32);
		}
	}
}