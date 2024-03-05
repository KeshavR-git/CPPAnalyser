void Capitalise(char* phrase)
{
	int i = 1;
	if ((phrase[i - 1] >= 97) && (phrase[i - 1] <= 122))
	{
		phrase[i - 1] = (phrase[i - 1] - 32);
	}
	while (i < strlen(phrase))
		if (((phrase[i - 1]) == ' ') && ((phrase[i] != ' ')) && ((phrase[i] >= 97) && (phrase[i] <= 122)))
		{
			phrase[i] = (phrase[i] - 32);
			i++;
		}
		else
		{
			i++;
		}
}