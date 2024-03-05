void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	if (phrase[0] >= 'a' && phrase[0] <= 'z')
	{
		phrase[0] = phrase[0] - 32;
	}
	else
	{
		phrase[0] = phrase[0];
	}
	for (int i = 0;i < length; i++)
	{
		if (phrase[i] == ' ' && (phrase[i+1] >= 'A' && phrase[i+1] <= 'Z'))
		{
			phrase[i + 1] = phrase[i + 1];
		}
		else if (phrase[i] == ' ' && (phrase[i+1] >= 'a' && phrase[i+1] <= 'z'))
		{
			phrase[i + 1] = phrase[i + 1] - 32;
		}
		else
		{
			phrase[i + 1] = phrase[i + 1];
		}
	}
}