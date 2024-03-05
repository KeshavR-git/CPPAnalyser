void Cap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - 32);
	}
}
void Capitalise(char* phrase)
{
	int length = strlen(phrase), i;
	Cap(phrase, 0);
	for (i = 1; i < length; i++)
	{
		if (phrase[i - 1] == ' ')
		{
			Cap(phrase, i);
		}
	}
}