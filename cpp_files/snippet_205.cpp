#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int i = 0;
	int j = strlen(phrase);

	for (i = 0; i <= j; i++) {
		if (phrase[i - 1] == ' ' || i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
	}


}