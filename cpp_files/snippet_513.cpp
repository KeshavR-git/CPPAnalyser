void Capitalise(char *phrase)
{
	if (phrase[0] >= 'a' && phrase[0] <= 'z')
	{
		phrase[0] = toupper(phrase[0]);
	}

	int length = strlen(phrase);

	for (int index = 0; index < length - 1; index++)
	{
		if (phrase[index] == ' ' && (phrase[index + 1] >= 'a' && phrase[index + 1] <= 'z'))
		{
			phrase[index + 1] = toupper(phrase[index + 1]);
		}
	}
	// printf("%s\n", phrase);
}