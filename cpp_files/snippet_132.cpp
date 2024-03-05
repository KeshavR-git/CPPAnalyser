#include <stdio.h>
void Capitalise(char* phrase)
{
	int length = 0;
	while (phrase[length] != '\0') {
		length++;
	}
	if (phrase[0] <= 122 && phrase[0] >= 97) {
		phrase[0] -= 32;
	}
	for (int i = 0; i < length; i++) {
		if (phrase[i] == ' ' && phrase[i+1] <= 122 && phrase[i+1] >= 97) {
			phrase[i + 1] -= 32;
		}
	}
}