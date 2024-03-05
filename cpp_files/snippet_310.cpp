void Capitalise(char *phrase)
{
	int i;

	for(i=0; phrase[i]; i++)
	{
		if(i==0)
		{
			if('a'<=phrase[i] && phrase[i]<='z')
			{
				phrase[i]=phrase[i]-32;
			}
		}
		else if(phrase[i-1]==' ')
		{
			if('a'<=phrase[i] && phrase[i]<='z')
			{
				phrase[i]=phrase[i]-32;
			}
		}
	}

}