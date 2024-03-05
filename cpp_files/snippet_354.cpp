void ToUppercase(char *firstLetter)
{
	if ((*firstLetter > 96) && (*firstLetter < 123)) {
	*firstLetter -= 32;
	}
}

void Capitalise(char* phrase)
{
	int i = 1;
	ToUppercase(&phrase[0]);
	while (i < 1000) {
		if ((phrase[i - 1] == 32) && (phrase[i] != 32)) {
			ToUppercase(&phrase[i]);
		}
		i++;
	}
}