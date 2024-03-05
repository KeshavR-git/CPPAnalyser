char UpperCase(char letter){
	if (letter >= 97 && letter <= 122){
		return (letter - 32);
	}
	return letter;
}
void Capitalise(char *phrase)
{
	int length = strlen(phrase);
	phrase[0] = UpperCase(phrase[0]);
	for (int i = 1; i < length; i++){
		if(phrase[i-1] == 32){
			phrase[i] = UpperCase(phrase[i]);
		}
	}
}