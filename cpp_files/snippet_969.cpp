void Capitalise(char *phrase)
{
	int i;
	int j;
	for (i = 0; i < strlen(phrase); i++) {
		if (i == 0) {
			phrase[i]=toupper(phrase[i]);
		}
	}
		for (i = 0; i < strlen(phrase); i++) {
			if (phrase[i] ==' '){
				j = i + 1;
				phrase[j]=toupper(phrase[j]);
			}
}
}