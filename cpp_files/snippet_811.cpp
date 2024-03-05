#include <string.h>
int ChangeValue(char phrase);
void Capitalise(char *phrase) {
	int i = 0;
	int x = strlen(phrase)-1;
	for(i = 0; i <= x; i = i + 1) {
		if (phrase[i] == ' ' && phrase[i + 1] > 0) {
			phrase[i + 1] = ChangeValue(phrase[i + 1]);
		}
		else if (phrase[0] > 0) {
			phrase[0] = ChangeValue(phrase[0]);
		}
		else phrase[i] = phrase[i];		
	}
}

int ChangeValue(char phrase) {
	if (phrase >= 97 && phrase <= 122) {
		phrase = phrase - 32;
		return phrase;
	}
	else return phrase;
}