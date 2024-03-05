#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

void Capitalise(char* phrase)
{
	int letter;
	int i = 0;
	int letterbefore;
	letter = phrase[i];
	
	if ((letter >= 97) && (letter <= 122) ){
		phrase[i] = letter - 32;
	}

	i++;
	while (phrase[i] != '\0') {
		letter = phrase[i];
		letterbefore = phrase[i - 1];

		if (letterbefore == 32) {
			if ((letter >= 97) && (letter <= 122)) {
				phrase[i] = letter - 32;
			}
		}
		
		
		
		i++;
	}


}