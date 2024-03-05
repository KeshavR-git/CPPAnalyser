#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

void Capitalise(char* phrase) {
	int x = strlen(phrase);
	if (phrase[0] >= 97 && phrase[0] <= 122) {
		phrase[0] = (phrase[0] - 32);
	}
	for (int i = 0; i < x; i++) {
		if (phrase[i] >= 97 && phrase[i] <= 122 && phrase[i-1] == 32){
			phrase[i] = (phrase[i] - 32);
		}
	}
}