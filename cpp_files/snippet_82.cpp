void CapLetter(char *phrase, int position)
{
	if (phrase[position] >= 'a' && phrase[position] <= 'z')
		phrase[position] = phrase[position] - 32;
}

void Capitalise(char *phrase)
{
	int i = 0;
	
	while(phrase[i] != 0) {
		if(i == 0)
			CapLetter(phrase, i);
		if(phrase[i] == ' ')
			CapLetter(phrase, i+1);
		i++;
	}
}