void Capitalise(char* phrase)
{
	int length = strlen(phrase);


	for (int i = 0; i < length; i++)
	{
		if (((i == 0 && (phrase[i] >= 97 && phrase[i] <= 122)) || (phrase[i-1] == ' ')) && (phrase[i] >= 97 && phrase[i] <= 122))
		{
			//On the ASCII chart the lower case is 20 values higher so lower case to capital is -32
			phrase[i] = phrase[i] - 32; 
		}
	}
}