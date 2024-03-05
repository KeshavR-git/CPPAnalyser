void Capitalise(char *phrase)
{
	int length = strlen(phrase),i;
	
	if ((phrase[0] >= 97) && (phrase[0] <= 122)){
		phrase[0] -= 32;
	}
	for (i = 1; i < length; i++) {
		if ((phrase[i] == ' ') && (phrase[i + 1] >= 97) && (phrase[i + 1] <= 122)) {
			phrase[i + 1] -= 32;
		}
	}
}