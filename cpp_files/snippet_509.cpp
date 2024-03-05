void helper(char* letter, int pos) {

	if (letter[pos] >= 97 && letter[pos] <= 122) {
	letter[pos] = (char)letter[pos] - ('a' - 'A');
	}
}


void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		if (i == 0) {
			helper(phrase, 0);
		}
		else if (phrase[i - 1] == ' ') {
			helper(phrase, i);
		}
		i++;
	}
}