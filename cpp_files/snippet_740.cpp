#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
	int i = 0;
	while (phrase[i] != '\0')
	{
		if ( 97 <= phrase[i] && phrase[i] <=122)
		{
			
			if (i == 0 || phrase[i-1] == 32)
			{
				phrase[i] = phrase[i] - ('a' - 'A');	
			}
			
		}
		i++;
	}
}