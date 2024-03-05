#include <stdio.h>
#include <string.h>
void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	for (int i = 0; i < length; i++)
	{
		if (i == 0 || phrase[i - 1] == ' ')
		{
			phrase[i] = toupper(phrase[i]);
		}
	}
}