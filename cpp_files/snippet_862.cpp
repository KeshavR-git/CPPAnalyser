void Capitalise(char* phrase)
{
	int counter;
	int length = strlen(phrase);
	int current;
	int changed;
	int next;
	
	if ((phrase[0] >= 97) && (phrase[0] <= 122))
	{
		current = phrase[0];
		changed = current - 32;
		phrase[0] = changed;
	}

	for (counter = 0; counter < (length - 2); counter++)
	{
		current = phrase[counter];
		next = phrase[counter + 1];

		if (current == 32)
		{
			if ((next >= 97) && (next <= 122))
			{
				changed = next - 32;
				phrase[counter + 1] = changed;
			}
		}
	}
}