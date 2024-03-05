#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void Capitalise(char* phrase)
{
	char convert;
	int i = 0;
	convert = phrase[0];
	convert = toupper(convert);
	phrase[0] = convert;
	while (phrase[i] != 0)
	{
		if (phrase[i] == 32)
		{
			convert = phrase[i+1];
			convert = toupper(convert);
			phrase[i+1] = convert;
		}
		
		i++;
	}
}