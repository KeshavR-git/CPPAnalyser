#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Capitalise(char* phrase) {

	int x = strlen(phrase);
	phrase[0] = (char)toupper(phrase[(0)]);
	for (int i = 0; i <= x; i++) {
		if (phrase[i] == ' ') {
			phrase[(i + 1)] = (char) toupper(phrase[(i + 1)]);
		}
	}
}