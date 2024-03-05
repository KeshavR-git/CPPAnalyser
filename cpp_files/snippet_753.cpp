void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	for (int i = 0; i<=length; i++)// taking the program through every character in string
	{
		if ((phrase[i - 1]==32) || (i == 0))	
		{
			if ((phrase[i]>=97)&&(phrase[i]<=122))
			{
			phrase[i] = (phrase[i] -32);
			}
		}
			

 }
}