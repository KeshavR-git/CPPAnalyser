#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char* phrase)
{
	int phraseLength = strlen(phrase);
	int i;

	if (isalpha(phrase[0])) {
		phrase[0] = toupper(phrase[0]);
	}

	for (i = 1; i < phraseLength; i++) {
		if (isspace(phrase[i])) {
			if (isalpha(phrase[i + 1])) {
				phrase[i + 1] = toupper(phrase[i + 1]);
			}
		}
	}
}