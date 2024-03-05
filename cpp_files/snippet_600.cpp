#include <stdio.h>

void Capitalise(char *phrase) {
	int i;
	for (i = 0; i!=99; i++) {
		if (phrase[i] > 96 && (phrase[i - 1] == 32 || phrase[i-1] == 0)) {
			phrase[i] = phrase[i] - 32;
		}
	}
}