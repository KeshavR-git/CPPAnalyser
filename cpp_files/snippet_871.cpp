void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

void Capitalise(char* phrase) {
	int i = 0;
	int j;

	while (phrase[i] != '\0') {
		
		if (i == 0) {
			MakeCap(phrase, 0);
		}

		i++;
	}

	for (j = 0; j < i; j++) {
		if (phrase[j - 1] == ' ') {
			MakeCap(phrase, j);
		}
	}
}