#include<stdio.h>
#include <ctype.h> 

void Capitalise(char* phrase) {

	int i = 0;
	while (phrase[i] != 0) {
		if (i == 0) {
			phrase[i] = toupper(phrase[i]);
		}
		if (phrase[i - 1] == 32) {
			phrase[i] = toupper(phrase[i]);
		}
		i++;
	}

}