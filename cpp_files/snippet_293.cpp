#include <ctype.h>	
void Capitalise(char* phrase)
{
	int i, length;
	length = strlen(phrase);
	for (i = 0; i <= length; i++) {
		if (phrase[i - 1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
		phrase[0] = toupper(phrase[0]);
	}
}