void Capitalise(char *phrase)
{
	int i = 0;
	int j = strlen(phrase);
	if (phrase[0] > 96 && phrase[0] < 123) {
		phrase[0] -= 32;
	}
	for (i = 1; i < j; i++) {
		if ((phrase[i] == 32) && (phrase[i+1]>96) && (phrase[i+1]<123)) {
			phrase[i + 1] -= 32;
		}
	}
}