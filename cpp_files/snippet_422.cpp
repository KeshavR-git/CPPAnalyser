void SingleCap(char* phrase, int pos)
{
	// if the char is an alphabetical character
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		// conv to capital using ascii values
		phrase[pos] = (char)(phrase[pos] - 32);
	}
}

void Capitalise(char* phrase)
{
	int i = 0;
	// always capitalising the first character
	SingleCap(phrase, 0);
	// looping through whole array until a null character is reached
	while (phrase[i] != 0) {
		// if there is a space in front of the indexed character (new word)
		if (phrase[i - 1] == ' ') {
			SingleCap(phrase, i);
		}
		i++;
	}
}