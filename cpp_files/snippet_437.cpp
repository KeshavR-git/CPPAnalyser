#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <string.h>

void Capitalise(char* phrase)
{
	char space[] = "   ";
	int cap = 0;
	int i = 1;
	phrase[0] = toupper(phrase[0]);
	while (phrase[i] != 0) {
		if (cap == 1) {
			phrase[i] = toupper(phrase[i]);
			cap = 0;
		}
		if (phrase[i] == space[1]) {
			cap = 1;
		}
		i++;
	}
}