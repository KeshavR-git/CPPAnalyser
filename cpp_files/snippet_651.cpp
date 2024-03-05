void Capitalise(char *phrase)
{
	// Initialise a counter
	int i;

	//Capitalise the first letter
	for (i = 0; phrase[i] != '\0'; i++) {

		if (i == 0)
		{
			if ((phrase[i] >= 'a' && phrase[i] <= 'z'))
			{
				phrase[i] = phrase[i] - 32;
			}
		}
		else if (phrase[i] == ' ') 
		{
			i++;
					if ((phrase[i] >= 'a' && phrase[i] <= 'z')) 
					{
						phrase[i] = phrase[i] - 32;
					}
		} else 
		{ 
			if ((phrase[i] >= 'A' && phrase[i] <= 'Z'))
			{
				phrase[i] = phrase[i] + 32;
			}

		}
	}

}