#include <string.h>

void Capitalise(char* phrase) {
	int length = strlen(phrase);
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = phrase[0] - 32;
	}
	for (int i = 1; i < length; i++) {
		if (phrase[i] == 32) {
			if (phrase[i + 1] >= 97 && phrase[i + 1] <= 122) {
				phrase[i+1] = phrase[i+1] - 32;
			}
		}
	}
}