void Capitalise(char* phrase)
{
	for (int i = 0; phrase[i] != 0; ++i) {
		// If its first char of phrase and its alphabetic, capitalise
		if ((!i) && (phrase[i] > 96 && phrase[i] < 123)) {
			// The lower case letters and capital letters are offset by 32
			phrase[i] -= 32;
		}

		// If it is a space and next char is alphabetic, capitalise
		if ((phrase[i] == ' ') && (phrase[i+1] > 96 && phrase[i+1] < 123)) {
			phrase[i + 1] -= 32;
		}
	}
}