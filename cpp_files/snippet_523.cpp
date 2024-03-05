void Capitalise(char* phrase)
{
	int length;

	length = strlen(phrase);

	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}

	for (int i = 1; i < length; i++) {
		if (phrase[i] == 32) {
			if ((phrase[i + 1] > 96) && (phrase[i + 1] < 123) && ((i + 1) < length))
				phrase[i + 1] = phrase[i + 1] - 32;
		}		
	}
}