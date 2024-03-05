#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
	int x,i;
	x=strlen(phrase);
	for (i = 0; i <= x; i++) {
		if ((phrase[i]==32)&&((phrase[i+1]<=122)&&(phrase[i+1]>=97))){
			phrase[i + 1] = phrase[i + 1] - 32;
		}else if (phrase[i] == 0) {
			phrase[i] = 32;
		}else if ((phrase[i] > 122) || (phrase[i] < 97)) {
			phrase[i] = phrase[i];
		}else if ((phrase[0] <= 122) && (phrase[0] >= 97)) {
			phrase[0] = phrase[0] - 32;
		}
			}	
}