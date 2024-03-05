void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	phrase[0] = toupper(phrase[0]);
	for (int i = 0; i <= length; i++)
	{	
		if (phrase[i] >= 'a' && phrase[i] <= 'z' && phrase[i-1] == ' ')
		{
			phrase[i] = toupper(phrase[i]);
		}
	}
	
}