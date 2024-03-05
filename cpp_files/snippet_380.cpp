#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


void Capitalise(char* phrase) {
	int length = strlen(phrase);
	int tempStor = 0;
	int tempStor2 = 0;
	int value = (int)phrase[0];
	for (int i = 0; i < length; i++) {
		tempStor = (int)phrase[i];
		

		if (tempStor == 32) {
		    
			if (((int)phrase[i+1] >= 97) && ((int)phrase[i+1] <= 122)) {
		
				tempStor2 = ((int)phrase[i+1]- 32);
			
				phrase[i+1] = (char)tempStor2;

			}
		}

	}
	if ((value >= 97) && (value <= 122)) {
		phrase[0] = (char)(value - 32);


	}
	return;
}