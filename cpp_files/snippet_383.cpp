#include <string.h>

void Capitalise(char *phrase)
{
	for (int i = 0; i < (int)strlen(phrase); i++)
	{
	    // If first character or folling a space and is lowercase letter
		if ((i == 0 || phrase[i - 1] == ' ') && phrase[i] <= 'z' && phrase[i] >= 'a')
		{
		    // Add difference between 'A' and 'a' (capitalise)
			phrase[i] += ('A' - 'a');
		}
	}
}