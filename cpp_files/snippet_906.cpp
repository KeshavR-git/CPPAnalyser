#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase) {
	int i, len = strlen(phrase);
	for (i = 0;i < len;i++) {
		if (i == 0 || phrase[i - 1] == ' ') {
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
				phrase[i] = phrase[i] - 'a' + 'A';
		}
	}
}