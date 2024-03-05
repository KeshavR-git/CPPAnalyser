void Capitalise(char *phrase)
{
	int replaceNext = 1;
	int i = 0;

	while (phrase[i] != '\0') {
		if (replaceNext) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				phrase[i] = phrase[i] - 32;
			}	
		}
		if (phrase[i] == 32) {
			replaceNext = 1;
		} else {
			replaceNext = 0;
		}
		i++;     
	} 	
}