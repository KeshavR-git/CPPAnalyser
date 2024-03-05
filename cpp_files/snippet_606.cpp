void Capitalise(char *phrase)
{
	int i;
	int b;
	for (i = 0; i < strlen(phrase); i++)
	{
		if(phrase[i] == ' '){
			for (b = 97; b < 123; b++)
			{
				if (phrase[i+1] == b)
				{
					phrase[i+1] = (phrase[i+1] - 32);
				}
			}
		}else{
			for (b = 97; b < 123; b++)
			{
				if (phrase[0] == b)
				{
					phrase[0] = (phrase[0] - 32);
				}
			}
}
	}
}