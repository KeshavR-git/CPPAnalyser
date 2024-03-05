void Capitalise(char* phrase)
{
	int length;
	length = strlen(phrase);
	for (int i = 0; i < length; i++) {
		//check for first letter
		if (i == 0){
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
		//check for everything else
		else if (phrase[i - 1] == ' ') {
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}