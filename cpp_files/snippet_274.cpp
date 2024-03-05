void helper(char *array, int index) {
	if ((int)array[index] < 123 && (int)(array[index]) > 96) {
		array[index] = (char)((int)array[index] - 32);
	}
}

void Capitalise(char *phrase)
{
	int i = 0;
	while (phrase[i] != '\0') 
	{
		if (i == 0 || (int)phrase[i-1] == 32) 
		{
			helper(phrase, i);
		}

		i++;
	}
}