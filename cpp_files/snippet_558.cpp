void Capitalise(char* phrase)
{
	for (int i = 0; i < strlen(phrase); i++) {
		if (phrase[i] >= 97 && phrase[i] <= 122) {
			if (i == 0 || phrase[i - 1] == ' ') {
				phrase[i] = phrase[i] - 32;
				//printf("%s", phrase[i]);
			}
		}
	}
}