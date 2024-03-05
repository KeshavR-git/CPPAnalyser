void Capitalise(char *phrase)
{
	int i, len;
	
	len = strlen(phrase);
	
	for(i = 0; i <= len; i++) 
	{
		if(phrase[i] >= 'a' && phrase[i] <= 'z')
		{
			if(phrase[i-1] == ' ' || i == 0)
			{
				phrase[i] -= 32;
			}
		}				
	}	
}