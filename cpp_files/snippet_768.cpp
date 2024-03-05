void Capitalise(char *phrase)
{
	int i, length;
	length = strlen(phrase) - 1;
	for (i = 0; i <= length; i++) {
		if ((phrase[i] == ' ') && (phrase[i + 1] != ' ')) {
			if ((phrase[i +1] >= 97) && (phrase[i+1] <= 122)) {
				phrase[i+1] = phrase[i+1] - 32;
			}
		}
		else if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
			phrase[0] = phrase[0] - 32;
		}		
	}
}