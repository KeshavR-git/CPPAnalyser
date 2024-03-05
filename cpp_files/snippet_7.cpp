void Capitalise(char* phrase)
{
	int i;
	int length = strlen(phrase) - 1;
	for (i = 0; i <= length; i++) {
		if (i == 0) {
			if ((97 <= phrase[i]) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
			}
		}
		if (phrase[i] == ' ') {
			++i;
			if ((97 <= phrase[i]) && (phrase[i] <= 122)) {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}