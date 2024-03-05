#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void Capitalise(char* phrase)
{
	int i;
	int length;
	length = strlen(phrase); 

	for (i = 0; i < length; i++) {
		if (phrase[i] == 32) {
			phrase[i + 1] = toupper(phrase[i + 1]);
			phrase[0] = toupper(phrase[0]);
		}
		else {
			phrase[0] = toupper(phrase[0]);
		}
	}
}