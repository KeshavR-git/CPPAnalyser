char Helper(char x)
{
	if (x > 96 && x < 123)
		x -= 32;
	return x;
}

void Capitalise(char* phrase)
{
	char a,n;
	int i = 0;

	//Capitalise the first letter:
	n =phrase[0];
	phrase[0] = Helper(n);

	//Go through each element and capitalise the letter after space:
	while (phrase[i] != '\0')
	{
		if (phrase[i] == ' ' && phrase[i+1] != ' ')
		{
			a = phrase[i+1];
			phrase[i+1] = Helper(a);
		}
		i++;
	}
}