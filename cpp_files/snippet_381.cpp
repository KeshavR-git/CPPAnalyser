#include <ctype.h>
void Capitalise(char *phrase)
{

	int i=0;
	
	if(phrase[0] <=122 && phrase[0] >= 97){
		phrase[0] = toupper(phrase[0]);
	}
	

	for(i = 0; i< strlen(phrase); i++){
		if(phrase[i] <=122 && phrase[i] >= 97 && phrase[i-1]== ' '){
		   phrase[i] = toupper(phrase[i]);
		}

	}

}