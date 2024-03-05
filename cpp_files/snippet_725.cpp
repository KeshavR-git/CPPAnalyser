#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	
	if (96 < phrase[0] && phrase[0] < 123) {
		phrase[0] = phrase[0] - 32;
	}

	for (int i = 1; i < strlen(phrase); i++) {

		if (phrase[i - 1] == 32 && 96 < phrase[i] && phrase[i] < 123) {
			phrase[i] = phrase[i] - 32;
		}

	}

	return;
}