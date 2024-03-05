#include <stdio.h>
#include <string.h>

// EXERCISE 3
void Capitalise(char *phrase)
{
	for (int i = 0; phrase[i] != '\0'; i++)
	{
		if ((phrase[i] >= 97 && phrase[i] <= 122))
		{
			if (i == 0 || phrase[i-1] == ' ')
			{
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}