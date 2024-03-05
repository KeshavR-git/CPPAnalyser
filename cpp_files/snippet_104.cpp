void Capitalise(char *phrase)
{
	int i;
	if (phrase[0] > 96 && phrase[0] < 132) {
		phrase[0] = (char)(phrase[0] - 32);
	}
	for (i = 1; phrase[i]!='\0'; i++) {
		if (phrase[i - 1] == ' ' && phrase[i] > 96 && phrase[i] < 132) {
			phrase[i] = (char)(phrase[i] - 32);
		}
	}
}