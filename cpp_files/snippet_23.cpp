void Capitalise(char *phrase)
{
	int counter = 0;

	while (phrase[counter] != '\0') {
		counter++;
	}

	for (int j = 0; j < counter; j++) {
		if (phrase[j] > 92 && phrase[j] < 123) {
			if (j == 0) {
				*phrase -= 32;
			}else if (phrase[j-1] == ' ') {
				phrase[j] -= 32;
			}
		}
	}
}