void Capitalise(char* phrase)
{
	int i;

	//scans through the string
	for (i = 0; phrase[i] != '\0'; i++) {

		//capitalises the first letter
		if (i == 0) {
			phrase[0] = toupper(phrase[0]);
		}

		//capitalises the letter after a space
		else if ((phrase[i] == ' ') && (phrase[i + 1] != ' ')) {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}