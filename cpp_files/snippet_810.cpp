#include <ctype.h>
int alphabetic(char phrase)
{
	int alphabet = 0;
	if (phrase >= 'a' && phrase <= 'z')
		alphabet = 1;
	return alphabet;
}

void Capitalise(char *phrase)
{
	int i;
	int length = strlen(phrase);
	phrase[0] = toupper(phrase[0]);
	for (i = 1; i <= length - 1; i++)
	{
		char letter = phrase[i];
		if ((alphabetic(letter) == 1) && (!(phrase[i-1] >= 'A' && phrase[i-1] <= 'Z')) && (phrase[i-1]==' '))
		{
			phrase[i] = toupper(phrase[i]);
		}
	}


}