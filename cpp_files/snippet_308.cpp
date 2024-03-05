void Capitalise(char* phrase)
{
	
	int i;
	for (i = 1; i < strlen(phrase); i++) {
		if (phrase[i-1] == ' ') {
			phrase[i] = toupper(phrase[i]);
		}
	}

	phrase[0] = toupper(phrase[0]);

}