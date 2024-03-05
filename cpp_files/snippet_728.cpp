void Capitalise(char *phrase)
{
	int i;
	int l = strlen(phrase);

	for (i = 0; i <= l; i++) {

		if (i == 0) {
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
		if (phrase[i] == ' ') {
			i++;
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}
			
	}

}