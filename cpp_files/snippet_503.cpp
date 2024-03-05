void Capitalise(char* phrase)
{
	int length,i;
	length = strlen(phrase);


	for (i = 0; i <= length; i++){
		for (char c = 'a'; c <= 'z'; c++) {
			if (phrase[0] == c) {
				phrase[0] = toupper(c);

			}
		}
	
		if ((phrase[i] ==' ')) {
			phrase[i+1] = toupper(phrase[i+1]);
		}
	}



}