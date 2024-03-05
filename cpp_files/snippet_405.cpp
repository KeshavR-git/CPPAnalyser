#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void Capitalise(char* phrase) {

	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {

		//if there is a space, it should print out the next letter as capatial using [i+1]
		if (phrase[i] == ' ') {
			phrase[i+1] = toupper(phrase[i+1]);
		}

		// if it is the first letter of the word, due to i = 0, base index is 0. It should print it as a capatial using toupper
		else if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
	}

}