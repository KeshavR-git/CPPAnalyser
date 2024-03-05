void identify(char* letter)
{
	int i;
	int j;
	int k;
	char start1 = 97;
	char start2 = 65;
	char small[27];
	char big[27];

	for (i = 0; i < 26; i++) {
		small[i] = start1;
		start1++;
	}
	for (j = 0; j < 26; j++) {
		big[j] = start2;
		start2++;
	}
	small[26] = '\0';
	big[26] = '\0';
	

	for (k = 0; k < 26; k++) {
		if (*letter == small[k]) {
			*letter = big[k];
		}
	}
}

void Capitalise(char* phrase)
{
	int i = 0;

	if (phrase[0] != 0) {
		identify(&phrase[0]);
	}
	for (i = 1; i <= 1000; i++) {
		if (phrase[i] !=' ' && phrase[i - 1] == ' ') {
			identify(&phrase[i]);
		}
	}
}