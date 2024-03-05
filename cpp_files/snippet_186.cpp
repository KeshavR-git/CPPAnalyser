#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	int i;

	for (i = 0; i < length; i++)
	{
		if (i == 0)
		{
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
			{
				phrase[i] = phrase[i] - 32;
			}
		}
		if (phrase[i] == ' ')
		{
			if (phrase[i+1] >= 'a' && phrase[i+1] <= 'z')
			{
				phrase[i+1] = phrase [i+1] - 32;
			}
		}
	}
}