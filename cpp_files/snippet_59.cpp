void CapitaliseLetter(char* phrase, int pos)
{
	if (phrase[pos] >= 'a' && phrase[pos] <= 'z') {
		phrase[pos] += 'A' - 'a';
	}
}

void Capitalise(char *phrase)
{
	int i = 0;
	while (phrase[i]) {
		if (!i) {
			CapitaliseLetter(phrase, i);
		}
		else if (phrase[i - 1] == ' ') {
			CapitaliseLetter(phrase, i);
		}
		i++;
	}
}