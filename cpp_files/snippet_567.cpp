void Capitalise(char* phrase) {
	int i, length;
	length = strlen(phrase);

	if ((phrase[0] >= 'a' && phrase[0] <= 'z')) {
		phrase[0] = phrase[0] - 32;
	}
		
	for (i = 1; i <length; i++)
	{
	
		if (phrase[i] == ' ')//check space
		{
			i = i + 1;
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
			{
				phrase[i] = phrase[i] - 32; 
			}
		}
	}


}