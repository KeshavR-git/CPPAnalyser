void Capitalise(char *phrase)
{
	int i;
	int Value;
	int previous= 0;
	int lowerTrue = 0;

	for (i = 0; i < 100; i++)
	{
		char character = phrase[i];
		Value = character;

		if ((97 <= Value) && (Value <= 122))
		{
			lowerTrue = 1;
			
		}
		else
		{
			lowerTrue = 0;
			previous = 0;
		}

		if ((lowerTrue == 1) && (i == 0))
		{
			Value = Value - 32;
			phrase[i] = Value;
		}
		else if ((lowerTrue == 1) && (previous == 1))
		{
		   
			Value = Value - 32;
			phrase[i] = Value;
			previous = 0;
		    
		}

		if (character == 32)
		{
			previous = 1;
		}
	}
}