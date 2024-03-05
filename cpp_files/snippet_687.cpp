/* The Capitalise function takes an input phrase and converts the first letter of each word
to upper case.
Author: Sam Heyes*/

void Capitalise(char* phrase) {

	int length, i;
	length = strlen(phrase);


	for (i = 0; i < length; i++) {
		if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}