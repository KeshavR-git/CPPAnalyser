void Capitalise(char *phrase)
{
	int x, y, a, b;
	int i = 0;
	x = phrase[0];
	if ((x >= 97) && (x <= 122))
	{
		y = x - 32;
		phrase[0] = (char)y;
	}
	while (phrase[i] != '\0')
	{
		if (phrase[i] == ' ')
		{
			a = phrase[i + 1];
			if ((a >= 97) && (a <= 122))
			{
				b = a - 32;
				phrase[i + 1] = (char)b;
			}
		}
		i++;
	}
}