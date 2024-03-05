void Capitalise(char* phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		i++;
	}
	if ((phrase[0] >= 97) && (phrase[0] <= 122)) {
		phrase[0] -= 32;
	}
	for (int j = 1; j < i; j++) {
		if ((phrase[j - 1] == 32) && ((phrase[j] >= 97) && (phrase[j] <= 122))) {
			phrase[j] -= 32;
		}
	}
}