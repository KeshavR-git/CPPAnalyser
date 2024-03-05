#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> 

void Capitalise(char *phrase) {
	int i;
	int length = strlen(phrase);

	for (i = -1; i < length; i++) {
		if (i==-1 || phrase[i]==' ') {
			phrase[i+1] = toupper(phrase[i+1]);
		}
	}
}