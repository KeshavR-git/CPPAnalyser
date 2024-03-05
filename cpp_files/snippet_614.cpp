void Capitalise(char *phrase)
{
	int lengthVar = 1;
	int length;

	for (int i = 0; lengthVar; i++) {
		if (phrase[i] == 0) {
			lengthVar = 0;
			length = i;
		}
	}

	for (int i = 0; i < length; i++) {

		if (i == 0) {
			if ((phrase[0] > 96) && (phrase[0] < 123)) {
				phrase[0] -= 32;
			}
		}

		if ((phrase[i] == 32)) {
			if ((phrase[i + 1] > 96) && (phrase[i + 1] < 123)) {
				phrase[i + 1] -= 32;
			}
		}
	}
}