void MakeCap(char* phrase, int pos);
void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122)
	{
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}
void Capitalise(char* phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if (i == 0)
		{
			MakeCap(phrase, 0);
		}
		else if (phrase[i - 1] == ' ')
		{
			MakeCap(phrase, i);
		}
	}
}