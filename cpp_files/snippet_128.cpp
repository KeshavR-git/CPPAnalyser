void Capitalise(char *phrase)
{
	int i, length, first, original, check, firstCharacter;

	length = strlen(phrase);
	
	firstCharacter = phrase[0];

	if ((firstCharacter > 96) && (firstCharacter < 123)) {
		first = firstCharacter - 32;
		phrase[0] = first;
	}

	for (i = 0; i < length; i++) {
		if (phrase[i] == ' ') {
			check = phrase[i + 1];
			if ((check > 96) && (check < 123)) {
				original = phrase[i + 1];
				char new = original - 32;
				phrase[i + 1] = new;
			}
		}
	}
}