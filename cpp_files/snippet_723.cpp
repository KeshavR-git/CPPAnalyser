#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int i;
	int a = strlen(phrase);
	for (i = 0; i < a; i++) {
			if ((i == 0) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
			} 
			else if((i > 0) && (phrase[i - 1] == 32) && (phrase[i] >= 97) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
			}
	}
}