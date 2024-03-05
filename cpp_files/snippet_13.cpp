void Capitalise(char *phrase)
{
	for (int i = 0; i < strlen(phrase); i++) {
		if (phrase[i] == 32) {
			if (phrase[i+1] >= 97 && phrase[i+1] <= 122) {
				phrase[i+1] -= 32;
			}
		}
		else if (i == 0) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				phrase[i] -= 32;
			}
		}
	}
}