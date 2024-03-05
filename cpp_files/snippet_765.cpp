#include <stdio.h>

//The Capitalise function takes a phrase string of characters and will capitalise the first letter of each word.
//Inputs: phrase: This is the charcater string that will be checked, and have the first letter of each word capitalised.
//Output: phrase with the first letter of every word capitalised.

//Author: Hunter Abernethy.

void Capitalise(char* phrase);




void Capitalise(char* phrase)
{
	int i;

	if (phrase[0] >= 'a')
	{
		phrase[0] = phrase[0] - 32;
	}

	for (i = 0; i <= strlen(phrase); i++)
	{
		if (phrase[i - 1] == ' ')
		{
			if (phrase[i] >= 'a')
			{
				phrase[i] = phrase[i] -32;
			}

		}
	}

}