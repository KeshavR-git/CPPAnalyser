#include <stdio.h>
/* This function capatilises the first letter in every word
Made By Vladislav Colpman*/

void Capitalise(char* phrase) {
	int i = 0;  // Initialises variable 'i'

	if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) { // Capitilises the first letter
		phrase[0] = (char)(phrase[i] - 32);
	}

	while (phrase[i] != '\0') { // Cycles through the string

		if ((phrase[i] >= 'a') && (phrase[i] <= 'z') && (phrase[i-1] == ' ')) {
			phrase[i] = (char)(phrase[i] - 32); // Capitilises the letter if it has a space before it
		}

		i++;    // increases 'i' by 1
	}
}