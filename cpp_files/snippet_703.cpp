int isCapital(char letter) 
{
	if (letter >= 'a' && letter <= 'z') {
		return 1;
	}
	else {
		return 0;
	}
}

void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	for (int i = 0; i < length; i++) {
		
		if (i == 0 && isCapital(phrase[i]) == 1) {
			phrase[i] = phrase[i] - ('a' - 'A');
		}
	
		if (phrase[i - 1] == ' ' && isCapital(phrase[i]) == 1) {
			phrase[i] = phrase[i] - ('a' - 'A');
		}
	}
}