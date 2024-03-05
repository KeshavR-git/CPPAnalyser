char BeforeCapitalise(char character){
	if (('a' <= character) && (character <= 'z')) {
		character = character - 32;
	}
	return character;
}


void Capitalise(char *phrase)
{
	int i = 0;
	int j;
	while (phrase[i] != '\0') {
		i++;
	}
	
	for (j = 0; j < i-1; j++) {
		if (j == 0) {
			phrase[j] = BeforeCapitalise(phrase[j]);
		}
		if (phrase[j] == ' ') { 
			phrase[j+1] = BeforeCapitalise(phrase[j+1]);
		}
	}
	
	if (i == 1) {
		phrase[0] = BeforeCapitalise(phrase[0]);
	}
}