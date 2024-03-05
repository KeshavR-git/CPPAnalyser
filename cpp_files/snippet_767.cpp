void Capitalise(char *phrase)
{
	// this function returns the phrase with capitals for the first letter of each word
	// (use ascii, and spaces + 1)
	
	// delcare variables
	int i;
	
	// scan each element of array to see if it lies between ascii 97 and 122
	// make each letter element at the start or after space a capital
	for (i = 0; i < strlen(phrase); i++) {
		if ((phrase[i] == ' ') && (phrase[i + 1] <= 122) && (phrase[i + 1] >= 97)) {
			phrase[i + 1] = phrase[i + 1] - 32;
		} else if ((i == 0) && (phrase[i] <= 122) && (phrase[i] >= 97)) {
		    phrase[i] = phrase[i] - 32;
		}
	}
}