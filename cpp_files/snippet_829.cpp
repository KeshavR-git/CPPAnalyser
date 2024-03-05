#include <ctype.h>
void Capitalise(char *phrase)
{

	int j = strlen(phrase);

	if (isalpha(phrase[0]))
	{
		phrase[0] = toupper(phrase[0]);
	}
	for (int i = 1; i < j; i++)
	{

		if (isalpha(phrase[i]))
		{
			if (phrase[i - 1] == ' ')
			{
				phrase[i] = toupper(phrase[i]);
			}
		}

	}

}