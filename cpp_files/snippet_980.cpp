void Capitalise(char* phrase)
{
	int length = 0;
	length = strlen(phrase);

	for (int i = 0; i < length; i++)
	{
		if (i == 0 )
		{
			phrase[i] = toupper(phrase[i]);
		} 
		else if (phrase[i] == ' ')
		{
			//phrase[i - 1] = toupper(phrase[i - 1]);
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}

}