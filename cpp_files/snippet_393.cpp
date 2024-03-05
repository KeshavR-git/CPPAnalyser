void Capitalise(char* phrase) {

	if ((phrase[0] > 96) && (phrase[0] < 123)) {
		phrase[0] = phrase[0] - 32;
	}

	int i;

	for (i = 1; phrase[i] != 48; i++) {
		if ((phrase[i] > 96) && (phrase[i] < 123)) {
			if (phrase[i - 1] == 32) {
			phrase[i] = phrase[i] - 32;
		    }	
		}		
	}
}