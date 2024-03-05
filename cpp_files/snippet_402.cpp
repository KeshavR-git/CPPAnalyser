void Capitalise(char* phrase) {
	
	int j;

	for (j = 0; phrase[j] != '\0'; j++) {

		if (((phrase[j] >= 'a') && (phrase[j] <= 'z')) && ((phrase[j-1] == ' ') || (phrase[j-1] == 0))) {

			phrase[j] = phrase[j] - 32;}
	}

}