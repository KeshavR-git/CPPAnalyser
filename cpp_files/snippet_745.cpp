#include <stdio.h>
#include <ctype.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int len = strlen(phrase);
	phrase[0] = toupper(phrase[0]);
	for (int i = 0; i <= len; i++) 
	{
		if (phrase[i] && phrase[i + 1] == ' ')
			phrase[i + 2] = toupper(phrase[i + 2]);
	}
}