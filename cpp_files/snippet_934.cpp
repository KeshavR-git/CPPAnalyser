#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int i; 
	if ((phrase[0] >= 'a') && (phrase[0] <= 'z'))
	{
		phrase[0] = (char)(phrase[0] - 32); 
	}
	for (i = 0; phrase[i] != '\0'; i++)   
	{
		if (phrase[i] == ' ') 
		{
			if ((phrase[i + 1] >= 'a') && (phrase[i + 1] <= 'z'))
				phrase[i + 1] = (char)(phrase[i + 1] - 32);
		}
	}
	
    return;
}