#include <ctype.h>
void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	if (isalpha(phrase[0])){
				phrase[0] = toupper(phrase[0]);
			}
	for (int i = 0; i<length; i++){
		if (phrase[i] == ' '){
			if (isalpha(phrase[i+1])){
				phrase[i+1] = toupper(phrase[i+1]);
			}
		}
	}
}