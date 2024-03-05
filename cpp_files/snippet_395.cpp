void UppercaseLetter(char *phrase, int index) {
	if ((phrase[index] > 96) && (phrase[index] < 123)) {
		phrase[index] -= 32;
	}
	return;
}

void Capitalise(char *phrase)
{
	int i = 1;
	int length = strlen(phrase);

	UppercaseLetter(phrase, 0);

	while (i<length) {
		if ((phrase[i-1] == ' ') && (phrase[i] != ' ')) {
			UppercaseLetter(phrase, i);
		}
		i++;
	}	
	return;
}