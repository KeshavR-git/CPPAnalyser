void Capitalise(char *phrase)
{
	// initialize loop iterators and other important variables
	int i;
	int length = strlen(phrase);

	// a for loop that continues till the length of the string
	for (i = 0; i < length; i++) {
		/* if the letter is not capital(ie in the ASCII tablet between 97 and 122 inclusive and there was a 
		space character before it) then captalize it by subtracting 32 of it*/
		if (((phrase[i - 1] == ' ')||(i==0)) && ((phrase[i] >= 97) && (phrase[i] <= 122))) {
			phrase[i] = phrase[i] - 32;
		}
	}
}