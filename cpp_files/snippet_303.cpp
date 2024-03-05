#include <string.h>

void Capitalise(char* phrase) {

	int i = 1;

	if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) {
		phrase[0] = phrase[0] - 32;
	}

	// loop through each letter of phrase
	while (phrase[i] != '\0') {
		if (phrase[i - 1] == ' ') {  // check if letter needs to be replaced
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
		i++;
	}
}