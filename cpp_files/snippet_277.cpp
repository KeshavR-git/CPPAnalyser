void Capitalise(char* phrase)
{
	int i = 0;
	int leng = strlen(phrase);
	if ((phrase[i] <= 122) && (phrase[i] >= 97)) {
		phrase[i] = phrase[i] - 32;
	}
	for (i = 1; i <= (leng); i++) {
		if (((phrase[i] <= 122) && (phrase[i] >= 97)) && (phrase[i - 1] == 32)) {
			phrase[i] = phrase[i] - 32;
		}
	}
}