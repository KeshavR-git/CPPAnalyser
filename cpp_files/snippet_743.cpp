void helper(char *phrase, int i) {
	if ((phrase[i] > 96) && (phrase[i] < 123)) {
		phrase[i] = phrase[i] - 32;
	}
}
void Capitalise(char* phrase)
{
	int i = 1;
	helper(phrase, 0);
	while (phrase[i] != 0) {
		if (phrase[i - 1] == 32) {
			helper(phrase, i);
		}

		i++;
	}
}