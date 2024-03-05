void Capitalise(char* phrase)
{
	int i;
	int j;
	int length;

	length = strlen(phrase);

	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}


	for (i = 0; i <= length; i++) {
		if (phrase[i] == 32) {
			j = i + 1;
			if ((phrase[j] > 96) && (phrase[j] < 123)) {
				phrase[j] = phrase[j] - 32;
			}
		}
	}

}