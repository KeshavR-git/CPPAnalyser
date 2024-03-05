char helper(char s);
void Capitalise(char* phrase);

void Capitalise(char* phrase) 
{
	phrase[0]= helper(phrase[0]);
	int i;
	for (i = 1; phrase[i] != 0; i++) {
		if (phrase[i - 1] == 32)
			phrase[i] = helper(phrase[i]);
	}	
}

char helper(char s)
{
	if (s < 90)
		return s;
	else
		s = s - 32;
	return s;
}