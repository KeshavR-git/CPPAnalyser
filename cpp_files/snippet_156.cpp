// EXERCISE 3
void Capitalise(char *phrase)
{

	// check first character
	if (phrase[0] >= 97 && phrase[0] <= 122)
			// capitalies that first character
			phrase[0] -= 32;

	// check subsequent characters in string
	for (int i = 0; phrase[i]; ++i)
		// if it's a space and it's followed by a lowercase letter
		if (phrase[i] == ' ' && phrase[i+1] >= 97 && phrase[i+1] <= 122)
			// capitalies that next letter
			phrase[i+1] -= 32;

	// all of the above could equally be accomplished by a state machine but
	// this works too
	
}