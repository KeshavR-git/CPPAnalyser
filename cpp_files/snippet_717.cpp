void Capitalise(char *phrase)
{
	int i;
	int j = strlen(phrase);
	for (i = 0; i < j; i++) {
		if ((phrase[i] == ' ') && (phrase[i+1]>='a') && ('z'>=phrase[i+1])) {
			phrase[i + 1] = phrase[i + 1] - ('a' - 'A');
		} if ((phrase[0] >= 'a') && ('z' >= phrase[0])) {
			phrase[0] = phrase[0] - ('a' - 'A');
		}
	}

}