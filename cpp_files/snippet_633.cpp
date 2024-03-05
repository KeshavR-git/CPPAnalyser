#include <stdio.h>
#include <string.h>

void Capitalise(char *phrase)
{
	int x;

	if ((phrase[0]>= 'a')&&(phrase[0]<= 'z')) {
	
	phrase[0]=phrase[0]-32;
	}
	if (((phrase[0]>=48))&&(phrase[0]<= 57)) {
	
	phrase[0]=phrase[0];
	}
	for (x=1; phrase[x]!= '\0'; x++) {
	
	if (phrase[x]== ' ') {
	
	if ((phrase[x + 1]>= 'a')&&(phrase[x + 1]<= 'z'))
	
	phrase[x + 1]=phrase[x + 1]-32;

		}
	}


}