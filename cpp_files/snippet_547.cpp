#include <stdio.h>
#include <string.h>
/*Author: Isabelle Shepherd
This function takes the input of a phrase, and capitilises the first letter of every word in the phrase.
It does so by calling another function (CapitiliseOrReturnOriginal) that checks through the alphabet and compares
the letter to make sure it is alpha. If so, it is capitilised. The character is then returned to our Capitilise function.*/

/* Function that checks the character to be capitilised is lower-case and alpha, and therefore can be capitilised*/
char CapitaliseOrReturnOriginal(char character) {
	char alphabet[26] = { 'a', 'b','c','d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };
	for (int x = 0; x < 26; x++) {
		if (alphabet[x] == character) {
			return alphabet[x] - ('a' - 'A');
		}
	}
	return character;
}

/* Function that goes through the phrase to capitilise letters*/
void Capitalise(char *phrase) {
	int capitaliseNext = 1;
	/* Finding the length of the phrase*/
	int size = strlen(phrase);

	/* Using a for loop to go through each character in the phrase*/
	for (int x = 0; x < size; x++) {
		/* Using an if statement to check if the character came after a space, and is not a space*/
		int isSpace = phrase[x] == ' ';
		if (!isSpace && capitaliseNext) {
			//Capitalise this character if it is alpha by calling the function CapitaliseOrReturnOriginal
			phrase[x] = CapitaliseOrReturnOriginal(phrase[x]);
		}
		capitaliseNext = isSpace ? 1 : 0;
	}
}