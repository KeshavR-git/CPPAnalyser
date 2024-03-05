void Capitalise(char *phrase)
{
	int i;
	int length = strlen(phrase);

	for (i = 0; i < length; i++) {
		//97 -122
		if (((phrase[i] >= 97) && (phrase[i] <= 122))&& ((phrase[i-1] == 32)||(i==0))) {
			phrase[i] = phrase[i] - 32;
		}
	}
}