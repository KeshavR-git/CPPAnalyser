void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	if (phrase[0] >= 97 && phrase[0] <= 122){
		phrase[0] -= 32;
	}
	for (int i = 0; i < length; i++){
		if (i<length-1 && phrase[i] == ' ' && phrase[i+1] >= 97 && phrase[i+1] <= 122){
			phrase[i+1] -= 32;
		}
	}
}