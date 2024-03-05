#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h> 


void Capitalise(char* phrase)
{
	int i=0;

	phrase[0] = toupper(phrase[0]);
	//l = strlen(phrase);

	//for (i = 0; i < l; i++) {
	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			phrase[i + 1] = toupper(phrase[i + 1]);
		}
		i++;
	}
}