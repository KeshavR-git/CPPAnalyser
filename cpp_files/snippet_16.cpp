void ChangeToCapital(char* phrase, int index)
{
	//check the input character is a lower case letter
	if (phrase[index] > 96 && phrase[index] < 123) {
		//convert to corresponding capital letter
		phrase[index] -= 32;
	}
}

void Capitalise(char* phrase)
{
	//initialise variables
	int i;
	int length = strlen(phrase);

	//check first character of the input
	if (phrase[0] != '\0'){
		ChangeToCapital(phrase, 0);
	}

	//check the first letter after a space character
	for (i = 0; i < length - 1; i++) {
		if  (phrase[i-1] == ' ') {
			ChangeToCapital(phrase, i);
		}
	}
}