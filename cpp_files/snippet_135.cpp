void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	int gapneeded = 0;

	for (int i = 0; i <= length; i++)
	{
		if (phrase[i] >= 65 && phrase[i] <= 90)
		{
			gapneeded = 1;
		}
		else if(gapneeded == 0)
		{

			if (phrase[i] >= 97 && phrase[i] <= 122)
			{
				phrase[i] = phrase[i] - 32;
				gapneeded = 1;
			}
			else
			{
			}
		}
			
		else
		{
			if (phrase[i] == 9 || phrase[i] == 32)
			{
				gapneeded = 0;
			}
			
		}
	}
}