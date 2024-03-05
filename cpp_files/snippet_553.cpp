// EXERCISE 3 - Capitalising first letter of each word
/*Created: 10/10/21
Author: Lia Arroyo*/
void Capitalise(char *phrase)
{
	// automatically capitalising first character in phrase, if character is a lowercase letter
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] = phrase[0] - 32;
	}

	// iterating through each character in phrase 
	int i = 1;
	while (phrase[i] != '\0') {

		// checking if character is a lowercase letter 'a' to 'z', AND the previous character is a diff character
		if (((phrase[i] >= 97) && (phrase[i] <= 122)) && (phrase[i -1] == 32)) {
			// capitalise
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}