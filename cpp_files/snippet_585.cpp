#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int x;
	int phraselen = strlen(phrase);

		for (x = 0; x <= phraselen; x++) {
			if ((phrase[x] >= 'a' && (phrase[x] <= 'z') && (x == 0 || phrase[(x - 1)] == ' '))) {
				phrase[x] = phrase[x] - 32;
			}
		}
}