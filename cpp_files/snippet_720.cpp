void Capitalise(char* phrase)
{
	int i;
	int length;
	length = strlen(phrase) - 1;

	if (('a' <= phrase[0])  && (phrase[0] <= 'z')) {
		phrase[0] = phrase[0] - 32;
	}

	for (i = 0; i <= length; i++) {
		if (phrase[i] == ' ') {
			i++;
			if (phrase[i] != ' ') {
				if (('a' <= phrase[i]) && (phrase[i] <= 'z')) {
					phrase[i] = phrase[i] - 32;
				}
			}
		}
	}
}