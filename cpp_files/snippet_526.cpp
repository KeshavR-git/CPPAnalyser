void MakeCapital(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) { // If character is between 'a' to 'z'
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A')); // Make letter capital
	}
}

void Capitalise(char* phrase)
{
	// Initialise variables
	int i = 0;

	// Use a while loop to loop through each element of the string array
	while (phrase[i] != '\0') {
		if (i == 0) { // If current element is the first one
			MakeCapital(phrase, 0); // Make the first element capital (if it is able to)
		}
		else if (phrase[i - 1] == ' ') { // If previous element to the current one is a space character
			MakeCapital(phrase, i); // Make the current element capital (if it is able to)
		}

		i++;
	}
}