#include <string.h> 


void Capitalise(char* phrase) {

	int i, length = strlen(phrase), DoCap = 1;
	for (i=0;i<=length;i++)
	{
		if (DoCap == 1)
		{
			if (phrase[i] >= 97 && phrase[i] <= 122)
				phrase[i] = phrase[i] - 32;
		}

		if (phrase[i] == ' ')
			DoCap = 1;
		else
			DoCap = 0;
	}
}