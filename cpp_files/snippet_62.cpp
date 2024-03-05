void Capitalise(char *phrase)
{
	int i;
	for (i = 0; phrase[i] != '\0'; i++) {
		if (!i) {
			if (phrase[i]>='a' && phrase[i]<='z'){
				phrase[i] = phrase[i] - 32;
			}
		} else if (phrase[i] == ' ') {
			i++;
			if (phrase[i]>='a' && phrase[i]<='z') {
				phrase[i] = phrase[i] - 32;
			}
		}
	}
}