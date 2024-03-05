#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char* phrase) {
	int i;
	int length = strlen(phrase);

	phrase[0] = toupper(phrase[0]);

	for (i = 0; i < length; i++) {
		if (isalpha(phrase[i]) && phrase[i-1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
	}
}