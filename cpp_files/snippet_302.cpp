void Capitalise(char* phrase) 
{
	int i=0;
	int length = strlen(phrase);

	for (; i < length; i++) {
		if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) {
			phrase[0] = phrase[0] - 32;
		}
		if (phrase[i] == ' ') {
			if ((phrase[i + 1] >= 'a') && (phrase[i + 1] <= 'z')) {
				phrase[i+1] = phrase[i+1] - 32;
			}
		}

		
	}
}