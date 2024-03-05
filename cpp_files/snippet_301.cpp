void Capitalise(char* phrase) {
	int n;
	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}

	for (n = 1; n < strlen(phrase); n++) {

		if (phrase[n] == 32) {
			
			//capitalises next letter if it is lowercase
			if ((phrase[n+1] > 96) && (phrase[n+1] < 123)) {
				phrase[n+1] = phrase[n+1] - 32;
			}
		
		}
	}

}