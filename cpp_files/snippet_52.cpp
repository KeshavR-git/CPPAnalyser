#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h>


void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] <= 122 && phrase[pos] >= 97) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}


void Capitalise(char* phrase) {

	int position = 0;

	while (phrase[position] != '\0') {

		if (position == 0) {
			MakeCap(phrase, 0);
		}
		else if (phrase[position - 1] == ' ') {
			MakeCap(phrase, position);
		}
		position++;
	}
}