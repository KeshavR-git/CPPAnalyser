void Capitalise(char *phrase)
{
	int i = 0;
	while (phrase[i] != '\0') {
		if (((phrase[i - 1] == ' ') || (i == 0)) && (phrase[i] >= 'a') && (phrase[i] <= 'z')) {
			// Make char upper case
			phrase[i] -= 32;
		}

		i++;
	}
}