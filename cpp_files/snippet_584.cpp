void Capitalise(char *phrase)
{
	int flag = 1;
	for (int i = 0; i < strlen(phrase); i++) {
		if (flag) {
			flag = 0;
			if (phrase[i] >= 'a' && phrase[i] <= 'z')
				phrase[i] = phrase[i] - 'a' + 'A';
		}
		if (phrase[i] == ' ')
			flag = 1;
	}
}