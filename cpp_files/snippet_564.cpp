void Capitalise(char *phrase)
{
	if ((97 <= phrase[0]) && (phrase[0] <= 122)) 
	{
		phrase[0] = (phrase[0] - 32);
    }
    
	int i = 1;
    while (phrase[i] != 0)
	{
		if (((97 <= phrase[i]) && (phrase[i] <= 122)) && (phrase[i-1] == 32))
		{
			phrase[i] = phrase[i] - 32;
		}
		
		i++ ;
	}
}