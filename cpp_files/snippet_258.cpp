void Capitalise(char* phrase)
{


	//Initializing variables.

	int length = 0;


	//Calculating length.
	length = strlen(phrase);

	for (int i = 0; i < length; i++)
	{
		if (i == 0) //Conerting character at first and last index to uppercase.
		{
			phrase[i] = toupper(phrase[i]);
		}
		else if (phrase[i] == ' ')//Conerting characters present before and after space to uppercase.
		{
			phrase[i + 1] = toupper(phrase[i + 1]);

		}
	}

	
}