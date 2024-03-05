void Capitalise(char* phrase) {
	int i;
	//going through values of i between 0 and 999
	for (i = 0; i <1000; i++)
	{
		//for the first value of the array must be capitalised
		if (i == 0)
		{
			if ((phrase[i] >= 'a' && phrase[i] <= 'z'))
				phrase[i] = phrase[i] - 32; //subtract 32 to make it capital in ASCII char
		}
		if (phrase[i] == ' ')// look for a space as that means the next value should be capitalised
		{
			++i;
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
			{
				phrase[i] = phrase[i] - 32; //subtract 32 to make it capital in ASCII
			}
		}
		
	}
	
}