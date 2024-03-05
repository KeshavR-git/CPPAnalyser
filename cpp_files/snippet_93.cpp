int Capitalise(char* phrase)
{

	int i = 0;
	//capitalize first character of words
	for (i = 0; phrase[i] != '\0'; i++)
	{
		//check first character is lowercase alphabet
		if (i == 0)
		{
			if ((phrase[i] >= 'a' && phrase[i] <= 'z'))
				phrase[i] = phrase[i] - 32; //subtract 32 to make it capital
			continue; //continue to the loop
		}
		if (phrase[i] == ' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
			{
				phrase[i] = phrase[i] - 32; //subtract 32 to make it capital
				continue; //continue to the loop
			}
		}
		else
		{
			
			if (phrase[i] >= 'A' && phrase[i] <= 'Z')
				phrase[i] = phrase[i] + 32; 
		}

	}
return 0;
}