void Capitalise(char *phrase)
{
	int strLength = strlen(phrase);
	for (int i = 0; i < strLength; i++){
		if (( (i == 0)||( phrase[i-1] == ' ') ) && ((97 <= phrase[i]) && (phrase[i] <= 122)) ) {
			phrase[i] -= 32;
		}
	}
}