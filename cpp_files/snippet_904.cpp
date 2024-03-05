#include<string.h>

void Capitalise(char* phrase) {
	int length = strlen(phrase), i = 0;
	while (i < length) { 
		if (phrase[i] == 32 && phrase[i + 1] <= 122 && phrase[i + 1] >= 97) {
			phrase[i + 1] = phrase[i + 1] - 32;
		}
		else if (i == 0 && phrase[i] <= 122 && phrase[i] >= 97) {
			phrase[i] = phrase[i] - 32;
		}
		i++;
	}

}