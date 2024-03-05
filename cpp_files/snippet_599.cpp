void Capitalise(char* phrase) {
	int length = strlen(phrase);
	for (int i = 0; i < length; i++)
	{
		if (i == 0 && phrase[i] != 32 && phrase[i] >= 'a' && phrase[i] <= 'z') {
				phrase[i] = (char)(('A' - 'a') + phrase[i]);
		}

		else if (phrase[i] == 32 && phrase[i + 1] != 32 && phrase[i + 1] >= 'a' && phrase[i + 1] <= 'z') {
			phrase[i + 1] = (char)(('A' - 'a') + phrase[i + 1]);
		}


	}
}