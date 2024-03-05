// EXERCISE 3
// Uppa - turns lower to uppercase make sure input is actually a lower case letter.
char Uppa(char lcletter) {
	char ucletter = lcletter-32;
	return ucletter;
}
// Capitalise - Capitalizes the words in a phrase, including the first word
void Capitalise(char *phrase)
{
	int i,length=strlen(phrase);
	for (i = 0; i < length; i++) {
		if (phrase[0] >= 'a' && phrase[0] <= 'z') {
			phrase[0] = Uppa(phrase[0]);
		}
		if ((phrase[i-1]==' ') && (phrase[i] >= 'a' && phrase[0] <= 'z')) {
			phrase[i] = Uppa(phrase[i]);
		}
	}
}