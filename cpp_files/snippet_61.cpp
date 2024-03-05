void Capitalise(char* phrase)
{
	int i = 0;
	// get length of string
	int length = strlen(phrase);

	// for loop that will run to length of string
	for (i = 0; i < length; i++) {

		if (i == 0) {

				phrase[i] = toupper(phrase[i]);

		}

		else if (phrase[i] == ' ') {

				// capitalise after space
				phrase[i + 1] = toupper(phrase[i + 1]);

		}
	}

}