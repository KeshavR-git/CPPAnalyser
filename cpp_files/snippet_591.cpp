void Capitalise(char* phrase) {

	int length = strlen(phrase);
	int i;

	for (i = 0; i < length; i++) {
		int asc = phrase[i];
		int ascPrev = phrase[i - 1];
		if ((i == 0) || (ascPrev == 32)) {
			if ((asc > 96) && (asc < 123)) {
				phrase[i] = (asc - 32);
			}
		}
	}
}