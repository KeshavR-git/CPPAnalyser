/*Capitalise().c
Author: Martin Lim
Lab 10 Task 3: Capital Importance
The purpose of this function is to take a single string as an input representing
a phrase, and capitalises the first character in each word in the phrase.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Capitalise(char *phrase) {
	int i;
	int length;
	length = strlen(phrase);
	
	for (i = 0; i < length; i++) {
		if (phrase[i] == 32) {
			phrase[i + 1] = toupper(phrase[i + 1]);
			phrase[0] = toupper(phrase[0]);
		}
		else {
			phrase[0] = toupper(phrase[0]);
		}
	}
}