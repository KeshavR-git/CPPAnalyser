char helper(char x) {
	if ('a' <= x && x <= 'z')
		x = x - ('a' - 'A');
	return x;
}

void Capitalise(char* phrase)
{
	int i = 0;
	phrase[i] = helper(phrase[i]);
	i++;
	while (phrase[i] != 0) {
		if (phrase[i] == ' ') {
			i++;
			phrase[i] = helper(phrase[i]);
		}
		i++;
	}
}