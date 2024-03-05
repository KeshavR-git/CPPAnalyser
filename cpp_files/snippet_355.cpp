void LowerToUpper(char *string, int index);

void Capitalise(char *phrase)
{
	int i = 1;
	LowerToUpper(phrase, 0);
	while (phrase[i] != '\0') {
		if (phrase[i - 1] == ' ') 
		{
			LowerToUpper(phrase, i);
		}
		i++;
	}
}

void LowerToUpper(char *string, int index) 
{
	if (string[index] >= 97 && string[index] <= 122)
	{
		string[index] = (char)(string[index] - 32);
	}
}