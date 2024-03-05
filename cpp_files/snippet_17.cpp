void Capitalise(char* phrase) {

	int length = strlen(phrase);

	for (int i = 0; i < length; i++)
	{
		if ((phrase[i - 1] == ' ' || (i == 0)) && phrase[i] >= 97 && phrase[i] <= 122) {
			phrase[i] -= 32;
		}
	}
}