#include <stdio.h>

int checkRange(char letter) {
	if (letter >= 97 && letter <= 122) {
		return 1;
	} else {
		return 0;
	}
}

void Capitalise(char *phrase) {

	if (checkRange(phrase[0])) {
		phrase[0] = phrase[0] - 32;
	}

	int i = 1;

	while ((phrase[i] != '\0')) {
		if ((phrase[i-1] == ' ') && (checkRange(phrase[i]))) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}
}