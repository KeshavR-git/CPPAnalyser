#include <stdio.h>
#include <string.h>

char Cap(char ch) 
{
	if (ch > 96 && ch < 123) 
	{
		return ch - 32;
	}
	else
	{
		return ch;
	}
}
void Capitalise(char* phrase) 
{
	int len = strlen(phrase) -1;
	phrase[0] = Cap(phrase[0]);
	for (int i = 0; i < len; i++)
	{
		if (phrase[i] == 32)
		{
			phrase[i + 1] = Cap(phrase[i + 1]);
		}
	}

}