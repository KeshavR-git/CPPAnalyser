// EXERCISE 3
void Capitalise(char *phrase)
{
    #include <ctype.h>
	if(phrase[0] >= 97 && phrase[0] <= 122){
			phrase[0] = toupper(phrase[0]);
		}
	for (int i = 0; i < strlen(phrase); i++){
		if(phrase[i] >= 97 && phrase[i] <= 122 && phrase[i - 1] == ' '){
			phrase[i] = toupper(phrase[i]);
		}
	}

}