void Capitalise(char* phrase) {
	int length, i;
	length = strlen(phrase);
	for (i = 0; i < length; i++) {
		int temp = phrase[i];
		int secondTemp = phrase[i + 1];
		if ((temp == 32) && (secondTemp != 32)) {
			if ((secondTemp > 96) && (secondTemp < 123)) {
				secondTemp = secondTemp - 32;
				char tempBack = secondTemp;
				phrase[i + 1] = tempBack;
			}
		}
		else if (i == 0) {
			int temp = phrase[i];
			if ((temp > 96) & (temp < 123)) {
				temp = temp - 32;
				char tempBack = temp;
				phrase[i] = tempBack;
			}
		}
	}
}