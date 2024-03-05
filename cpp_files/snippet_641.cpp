void Capitalise(char* phrase)
{
	int i = 0;
	int l = strlen(phrase) - 1;
	phrase[0] = toupper(phrase[0]);
	for (i = 0; i <= l; i++) {
		if (phrase[i] == ' ') {
			phrase[i+1] = toupper(phrase[i+1]);
		}
	}
}