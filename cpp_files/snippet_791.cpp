void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++){
		if (i == 0){
			phrase[i] = toupper(phrase[i]);
		}
		else if (phrase[i-1] == ' '){
			phrase[i] = toupper(phrase[i]);
		}
	}
}