void Capitalise(char* phrase)
{
	int i, count;

	count = 0;

	for (i = 0; i <= strlen(phrase); i++) {
		if ((phrase[i] != 32) && (i != strlen(phrase))) {
			count++;
		}
		else if (i == strlen(phrase)) {
			if ((phrase[i - count] >= 97) && (phrase[i - count] <= 122))
				phrase[i - count] -= 32;
		}
		else {
			if ((phrase[i - count] >= 97) && (phrase[i - count] <= 122))
				phrase[i - count] -= 32;
			count = 0;
		}
	}
}