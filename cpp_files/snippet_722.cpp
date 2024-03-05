#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}



void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		if (i == 0 || i - 1 == ' ') {
			MakeCap(phrase, i);
		}
		else if (phrase[i - 1] == ' ') {
			MakeCap(phrase, i);
		}
		i++;
	}
}