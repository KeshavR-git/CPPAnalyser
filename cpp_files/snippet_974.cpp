#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Capitalise(char *phrase)
{
	int maxlength = strlen(phrase) -1;
	for (int i = 0; i <= maxlength; i++)
	{
		if (phrase[0] >= 97 && phrase[0] <= 123)
		{
			phrase[0] = phrase[0] -32;
		}
		else if (phrase[i] >= 97 && phrase[i-1] == ' ')
		{
			phrase[i] = phrase[i] - 32;
		}
	}
	return 0;
}