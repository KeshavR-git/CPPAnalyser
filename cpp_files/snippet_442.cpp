void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}
void Capitalise(char* phrase)
{
	int i = 0;
	int length = 0;

	while (phrase[i] != '\0') {
		length = length + 1;
		i++;
	}

	for (i = 0; i <= length; i++) {
		if ((i == 0) || (phrase[i - 1] == 32)) {
			MakeCap(phrase, i);
		}
	}
}