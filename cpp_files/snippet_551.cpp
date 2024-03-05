void Capitalise(char* phrase)
{
	int a = strlen(phrase);
	for (int i = 0; i < a; i++) {
		if ((phrase[0] >= 'a') && (phrase[0] <= 'z')) {
			phrase[0] = phrase[0] - 32;
		}

		if (phrase[i - 1] == ' ') {
			if ((phrase[i] >= 'a') && (phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;

			}
		}
		

	}


}