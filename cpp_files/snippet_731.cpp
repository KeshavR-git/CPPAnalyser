//Ex3 Helper Function
void MakeCap(char* phrase, int pos)
{
	if (phrase[pos] >= 97 && phrase[pos] <= 122) {
		phrase[pos] = (char)(phrase[pos] - ('a' - 'A'));
	}
}

// EXERCISE 3
void Capitalise(char *phrase)
{
	int i = 0;
	MakeCap(phrase, i);
	i++;
	while (phrase[i] != '\0') {
		if (phrase[i] == ' ') {
			i++;
			if (phrase[i] == ' ') {
				i++;
			} else {
				MakeCap(phrase, i);
				i++;
			}
		} else {
			i++;
		}
	}
}