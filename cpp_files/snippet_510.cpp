// Function to capatilize the first character of each word
// Author: Fork
void Capitalise(char *phrase)
{
	// Set the integer of length equal to the length of the given phrase
	int length = strlen(phrase);
	// Loop while i is less than the length of the phrase
	for (int i=0; i<length; i++){
		// If the phrase item in index i is a lower case character and placed before a space or at the beginning of the line
		if (phrase[i]>= 97 && phrase[i] <= 122 && (phrase[i-1] == 32 || phrase[i-1] == 0)){
			// Subtract 32 from the character to make it uppercase
			phrase[i] -= 32;
		}
	}
}