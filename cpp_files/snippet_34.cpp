#include <string.h>

void Capitalise(char* phrase) {
	int i;
	int b = strlen(phrase);
	int j;
	for (i = 0; i <= b; i++) {
		//printf("%c\n", phrase[i]);
		if (phrase[i] == ' ') { //if there is a space in the sentence, and the next word needs to be captilized
			for (j = i; j < b; j++) {
				//printf("%c", phrase[j]);
				if (phrase[j] >= 'a' && phrase[j] <= 'z') {
					phrase[j] = (phrase[j] - 32);
					//printf("%c\n", phrase[j]);
					break;
				}
				else if (phrase[j]== ' ') {
					phrase[i] = ' ';
				}
				else if (phrase[j] >= 'A' && phrase[j] <= 'Z') {
					break;
				}
			}

			
		}
		else if (i == 0) {
			//printf("FALSE LMAO %c, %c \n", word[i], word[(b - i) - 1]);
			if (phrase[i] >= 'a' && phrase[i] <= 'z') {
				phrase[i] = (phrase[i] - 32);
				
			}
		}

	}
	
}