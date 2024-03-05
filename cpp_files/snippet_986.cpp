#include <ctype.h>
int alphabetical(char phrase)
{
	int a = 0;
	if (phrase >= 'a' && phrase <= 'z')
		a = 1;
	return a;
}

void Capitalise(char *phrase)
{
	int i;
	int l = strlen(phrase);
	phrase[0] = toupper(phrase[0]);
	for (i = 1; i <= l - 1; i++)
	{
		char letter = phrase[i];
		if ((alphabetical(letter) == 1) && (!(phrase[i-1] >= 'A' && phrase[i-1] <= 'Z')) && (phrase[i-1]==' '))
		{
			phrase[i] = toupper(phrase[i]);
		}
	}

}