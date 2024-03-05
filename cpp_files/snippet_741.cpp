void Capitalise(char* phrase);
void Capitalise(char* phrase)
{
	int i=0;
	if (phrase[0] >= 97 )
	{
		phrase[0] = phrase[0] - 32;


	}
	while (phrase[i] != '\0'&& phrase[i+1]!='\0')
	{
		if (phrase[i] == ' ' && phrase[i + 1] >= 97 )
		{
			phrase[i + 1] -= 32;

		}
		i++;



	}



}