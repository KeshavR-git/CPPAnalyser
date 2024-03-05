#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int i;
	i = 1;
	if ((phrase[0] <= 122) && (phrase[0] >= 97)) {
		phrase[0] = phrase[0] - 32;
	}

	for (i = 1; i < strlen(phrase);i++) {
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] <= 122) && (phrase[i + 1] >= 97)) {
				phrase[i + 1] = phrase[i + 1] - 32;
			}
		}
		
	
	
	}


}