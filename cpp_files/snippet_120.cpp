// EXERCISE 3
void Capitalise(char* phrase)
{
	int i;
	// Characters after space.
	for (i = 0; i < strlen(phrase); i++) {
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
				phrase[i + 1] -= 32;
			}
		}
	}

	//First word
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] -= 32;
	}
}