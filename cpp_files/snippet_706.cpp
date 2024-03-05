void CapitalOne(char *string, int index);
void CapitalOne(char *string, int index)
{
	if ((string[index] >= 97) && (string[index] <= 122))
	{
		string[index] -= 32;
	}
}

void Capitalise(char *phrase)
{
	CapitalOne(phrase, 0);

	int i;
	int len = strlen(phrase);

	for (i = 1; i < len; i++)
	{
		if (phrase[i-1] == ' ')
		{
			CapitalOne(phrase, i);
		}
	}

}