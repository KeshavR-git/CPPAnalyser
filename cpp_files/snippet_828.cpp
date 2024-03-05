#include <string.h>
#include <ctype.h>
void Capitalise(char* phrase)
{
	phrase[0] = toupper(phrase[0]);
	for (int i = 1; i < strlen(phrase); i++)
	{
		if (isspace(phrase[i]))
		{
			phrase[i+1] = toupper(phrase[i + 1]);
		}
	}
}