#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	int i = 0;
	//printf("%d %c \n", phrase[i], phrase[i]);
	int a = phrase[i];
	if ((a > 96) && (a < 123))
	{
		phrase[i] = a -32;
	}
	
	//printf("%d %c \n", phrase[i], phrase[i]);

	for (i = 0; i < length; i++) {
		
		a = phrase[i];
		int b = phrase[i+1];

		//printf("%d %d \n", a, b);
		if ((a == 32) && (b > 96) && (b < 123))
		{
			//printf("%c", b);
			phrase[i+1] = phrase[i+1] - 32;
		}
	}
}