// helper function for Capitalise function
void MakeCap(char *phrase, int pos) {

	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}

}

void Capitalise(char *phrase)
{
	int i = 0;

	MakeCap(phrase, i);

	i++;
	while (phrase[i] != '\0') {
		if (phrase[i - 1] == ' ') {
			MakeCap(phrase, i);
		}
		i++;
	}

}