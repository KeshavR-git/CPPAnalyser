//This function is created by Dimithri Gallage
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Capitalise(char* phrase)
{
	//declaring i as a integer
	int Capital;

	//setting up for loop for captial till its not equal
	for (Capital = 0; phrase[Capital] != '\0'; Capital++)
	{
		//seeing if capital is equal to zero
		if (Capital == 0)
		{
			if ((phrase[Capital] >= 'a' && phrase[Capital] <= 'z'))
				phrase[Capital] = phrase[Capital] - 32;
			continue;
		}
		if (phrase[Capital] == ' ')
		{
			++Capital;

			if (phrase[Capital] >= 'a' && phrase[Capital] <= 'z')
			{
				phrase[Capital] = phrase[Capital] - 32;
				continue;
			}
		}

		else
		{
			if (phrase[Capital] >= 'A' && phrase[Capital] <= 'Z')
				phrase[Capital] = phrase[Capital] + 32;
		}
	}
}