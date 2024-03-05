void Capitalise(char* phrase) {
	int i;
	int isFirst = 1;
	for (i = 0; i < strlen(phrase); i++) {

		if (isFirst) {
			if ((int)phrase[i] >= 97 && (int)phrase[i] <= 172) {
				phrase[i] -= 32;
			}
			isFirst = 0;
		}
		if ((int)phrase[i] == 32) {
			isFirst = 1;
		}
	}
}