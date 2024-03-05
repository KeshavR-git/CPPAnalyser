char CovertToCaptial(char letter) {
	// function CovertToCaptial() check the input char and if it is lower case
	// it will change it to captial

	if (letter >= 97 && letter <= 122) {
		letter -= (char)32;
	}
	return letter;
}

void Capitalise(char* phrase) {
	// declaring variable
	int i;

	//access the char array
	for (i = 0; i < strlen(phrase); i++) {
		if (phrase[i-1] == ' ' || i == 0) {
			// if the char is space, it will call the function CovertToCaptial() to check and covert it
			phrase[i] = CovertToCaptial(phrase[i]);
		}
	}
}