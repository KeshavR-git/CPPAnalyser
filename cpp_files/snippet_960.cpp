void Capitalise(char* phrase)
{
	int length = strlen(phrase);
	int followsSpace = 1;
	for (int i = 0; i < length; i++) {
		if (followsSpace) {
			if (phrase[i] >= 97 && phrase[i] <= 122) {
				phrase[i] = phrase[i] - 32;
			}
			followsSpace = 0;
		}
		else if (phrase[i] == ' ') {
			followsSpace = 1;
		}
	}
}