void Capitalise(char* phrase)
{
	int i=0;

	if ((phrase[i] >= 'a' && phrase[i] <= 'z')) {
		phrase[i] = phrase[i] - 32;
	}


	for (i = 0; phrase[i] != '\0'; i++) {

		if (phrase[i] == ' ') {
			++i;

			if ((phrase[i] >= 'a' && phrase[i] <= 'z')) {
				phrase[i] = phrase[i] - 32;
			}
		}

	}
}