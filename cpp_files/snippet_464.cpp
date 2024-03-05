#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int i = 0;
	int length;
	while (phrase[i] != '\0') {
		i++;
	}
	length = i;

	int j;
	j = 0;
	while (j <= length) {
		if (j == 0) {
			phrase[j] = toupper(phrase[j]);
		}
		else if (phrase[j] == ' ') {
			phrase[j + 1] = toupper(phrase[j+1]);
		}
		j++;
	}
}