void Capitalise(char* phrase)
{

	int count = 0;
	int i;

	while (phrase[count] != '\0') {
		count++;
	}
	
	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = (phrase[0] - 32);
	}

	for (i = 0; i <= count; i++) {
		if (phrase[i] == 32) {
			if ((phrase[i + 1] > 96) && (phrase[i + 1] < 123)) {
				phrase[i + 1] = (phrase[i + 1] - 32);
			}
		}
	}
	return;
}