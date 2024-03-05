void Capitalise(char* phrase)
{
	char a = ' ';
	int d = 0;
	phrase[d] = toupper(phrase[d]);
	int length = strlen(phrase);
	for (int i = 0; i < length; i++)
	{
		if (phrase[i] == a)
		{
			phrase[i + 1] = toupper(phrase[i + 1]);
		}

	}


}