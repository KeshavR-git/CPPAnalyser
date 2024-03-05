#include <stdio.h>
#include <string.h>

void helper(char* letter) {
	*letter = *letter - 32;
}

void Capitalise(char* phrase) {
	int a;
	a = strlen(phrase);
	
	if (a > 0 && (phrase[0] >= 'a') && (phrase[0] <= 'z')) {
		helper(&phrase[0]);
	}

	for (int i = 0; i < a; i++) {
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] >= 'a') && (phrase[i + 1] <= 'z')) {
				helper(&phrase[i + 1]);
			}
		}
	}
}