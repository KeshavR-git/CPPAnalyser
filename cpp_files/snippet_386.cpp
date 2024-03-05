void Capitalise(char* phrase)
{
	int i = 0;

	// Just for first index, check if lowercase character.
	if ((phrase[i] >= 97) && (phrase[i] <= 122)) {
		phrase[i] = phrase[i] - 32;
		i++;
	}

	// For rest of string (check if space before and if lowercase character.
	while (phrase[i] != 0) {

		if ((phrase[i-1]==32) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}