void Capitalise(char *phrase)
{
	int strLength,i;

	strLength = strlen(phrase);

	if (((int)phrase[0] <= 122) && ((int)phrase[0] >= 97)) {
		phrase[0] = phrase[0] - ('a' - 'A');
	}

	for (i = 1;i<strLength;i++) {
		if (((int)phrase[i+1] <= 122) && ((int)phrase[i+1] >= 97)) {
			if (phrase[i] == ' ') {
			phrase[i+1] = phrase[i+1] - ('a' - 'A');
			}
		}
	}

}