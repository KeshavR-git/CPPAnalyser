#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	int i;

	for (i = 0; i <= length; i++) {
		if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		else if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
	}
}