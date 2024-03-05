void Capitalise(char* phrase)
{
	int* pointer, i, j, length;
	pointer = &i;
	j = 1;
	i = 0;
	length = strlen(phrase);

	while (j == 1) {
		if (phrase[i] >= 'a' && phrase[i] <= 'z') {
			phrase[i] = phrase[i] - ('a' - 'A');
			j = 0;
		}
		if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
			j = 0;
		}
		if (j == 1) {
			*pointer = i + 1;
		}
	}

	for (i = 0; i < length; i++) {
		j = 1;
		if (phrase[i] == ' ') {
			while (j == 1) {
				if (phrase[i] >= 'a' && phrase[i] <= 'z') {
					phrase[i] = phrase[i] - ('a' - 'A');
					j = 0;
				}
				if (phrase[i] >= 'A' && phrase[i] <= 'Z') {
					j = 0;
				}
				if (i == (length - 1)){
				    j = 0;
				}
				if (j == 1) {
					*pointer = i + 1;
				}

			}
		}

	}
}