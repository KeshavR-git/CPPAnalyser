void Capitalise(char* phrase)
{
	int l = 0;
	int i = 0;
	while (phrase[l] != '\0') {
		l++;
	}
	if (phrase[0] >= 'a' && phrase[0] <= 'z') {
		phrase[0] = phrase[0] - 32;
	}
	for (i = 0; i < l; i++) {
		if (phrase[i] == ' ') {
			if (phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
				phrase[i+1] = phrase[i+1] - 32;
			}
		}
	}

}