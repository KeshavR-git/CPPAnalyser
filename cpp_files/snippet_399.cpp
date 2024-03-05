void Capitalise(char *phrase)
{
	int start = 1;
	for (int i = 0; i < strlen(phrase); i++) {
		if (((int)phrase[i] >= 97) && ((int)phrase[i] <= 122) && start) {
			phrase[i] = (char)((int)phrase[i] - 32);
		}
		if (phrase[i] == ' ') {
			start = 1;
		}
		else {
			start = 0;
		}
	}
}