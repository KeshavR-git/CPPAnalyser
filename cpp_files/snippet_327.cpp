void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

void Capitalise(char* phrase)
{
	//ensure first letter of phrase is capatilised
	MakeCap(phrase, 0);

	// while there is no nul character, search for spacebars, make the next letter capitalised
	int i = 0;
	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			MakeCap(phrase, i + 1);
		}
		i++;
	}
}