/* this function allows */

#include <stdio.h>
#include <string.h>
void Capitalise(char* phrase) {

	int length = (strlen(phrase))-1;

	int i;

	phrase[0] = toupper(phrase[0]);
	for (i = 0; i <= length; i = i + 1) {
		if ((phrase[i] == ' ')) {
			phrase[(i + 1)] = toupper(phrase[(i + 1)]);
		}
	}
}