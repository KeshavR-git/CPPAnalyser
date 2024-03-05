#include <stdio.h>
void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++)
		if (((phrase[i - 1] == ' ') || (i == 0)) && (phrase[i] >= 'a') && (phrase[i] <= 'z'))
			phrase[i] -= 32;
}