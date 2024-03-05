void Capitalise(char *phrase)
{
	int i, l;
	
	l = strlen(phrase);
	
	for(i = 0; i < l; i++)
	{
		if(phrase[0] > 90)
		{
			phrase[0] = phrase[0] -32;
		}
		else if(phrase[i] > 90 && (phrase[i-1] == 32))
		{
		phrase[i] = phrase[i] - 32;
		}
	}
}